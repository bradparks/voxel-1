package ;

import kha.graphics5_.MipMapFilter;
import kha.graphics5_.TextureFilter;
import kha.graphics5_.TextureAddressing;
import kha.Scheduler;
import kha.graphics4.TextureUnit;
import kha.graphics5_.CompareMode;
import kha.math.FastVector3;
import kha.math.FastMatrix4;
import kha.graphics4.ConstantLocation;
import kha.math.FastMatrix3;
import kha.Shaders;
import kha.graphics5_.VertexData;
import kha.graphics4.VertexStructure;
import kha.graphics4.PipelineState;
import kha.graphics4.IndexBuffer;
import kha.graphics4.VertexBuffer;
import kha.graphics4.Graphics;

class Scene {
	var blockRegistry = [];
	var blocks:Array<Int> = [];
	var indices:Array<Int> = [];

	var vertexBuffer:VertexBuffer;
	var indexBuffer:IndexBuffer;
	var pipeline:PipelineState;
	var camera:Camera;

	var blockStructure = [
		0, 0, 0, // Bottom
		1, 0, 0,
		1, 1, 0,
		0, 1, 0,

		0, 0, 1, // Top
		1, 0, 1,
		1, 1, 1,
		0, 1, 1,
		////

		1, 0, 0, // Front left
		1, 1, 0,
		1, 1, 1,
		1, 0, 1,

		1, 1, 0, // Front right
		0, 1, 0,
		0, 1, 1,
		1, 1, 1,

		1, 0, 1, // Back left
		0, 0, 1,
		0, 0, 0,
		1, 0, 0,

		0, 0, 0, // Back right
		0, 1, 0,
		0, 1, 1,
		0, 0, 1
	];
	var blockIndices = [
		0, 1, 2, //l1
		0, 2, 3,

		4, 5, 6, //r1
		4, 6, 7,

		8, 9, 10, //f?
		8,10, 11,

		12, 13, 14,
		12, 14, 15,

		16, 17, 18,
		16, 18, 19,

		20, 21, 22,
		20, 22, 23

	];
	var uv = [
		1, 1, //FL
		0, 1,
		0, 0,
		1, 0,

		1, 1, //BL
		2, 1,
		2, 0,
		1, 0,

		3, 1,
		3, 0,
		2, 0,
		2, 1,

		4-.05, 1-.05, //TOP?
		4-.05, 0+.05,
		3+.05, 0+.05,
		3+.05, 1-.05,

		5, 1,
		5, 0,
		4, 0,
		4, 1,

		5, 1,
		5, 0,
		6, 0,
		6, 1
	];
	/*var blockIndices = [
		0, 1, 3,
		1, 3, 2,
		0, 1, 5,
		5, 0, 4,
		0, 3, 7,
		0, 4, 7,
		1, 5, 6,
		1, 2, 6,
		2, 3, 7,
		2, 6, 7,
		5, 6, 4,
		6, 4, 7
	];*/

	var mvp:FastMatrix4;
	var mvpID:ConstantLocation;
	var textureID:TextureUnit;

	var chunkSize = 10;

	public function new(camera:Camera) {
		this.camera = camera;

		for (x in 0...chunkSize)
			for (y in 0...chunkSize)
				for (z in 0...chunkSize) {
					blocks.push(Math.sqrt(Math.pow(x-5,2)+Math.pow(y-5,2)+Math.pow(z-5,2)) < 5 ? 1 : 0);
				}

		// for (x in -50...50)
		// 	for (y in -50...50)
		// 		blocks.push(1);
				// blocks.push(new Block(x,-Std.int(Math.sqrt(Math.pow(x,2)+Math.pow(y,2))/4),y));
				// blocks.push(new Block(0,0,0));
				// blocks.push(new Block(1,1,0));
		constructGeometry();
	}

	inline public function getBlock(x, y, z) {
		return blocks[x*(chunkSize*chunkSize) + y*chunkSize + z];
	}

	function constructGeometry() {
		// Vertex structure
		var structure = new VertexStructure();
		structure.add("pos", VertexData.Float3);
		structure.add("uv", VertexData.Float2);

		// Pipeline
		pipeline = new PipelineState();
		pipeline.inputLayout = [structure];
		pipeline.fragmentShader = Shaders.block_frag;
		pipeline.vertexShader = Shaders.block_vert;

		pipeline.depthWrite = true;
		pipeline.depthMode = CompareMode.Less;


		pipeline.compile();

		// Graphics variables
		mvpID = pipeline.getConstantLocation("MVP");
		calculateMVP();
		textureID = pipeline.getTextureUnit("textureSampler");

		// Vertex Data
		vertexBuffer = new VertexBuffer(Std.int(blocks.length * blockStructure.length/3), structure, StaticUsage);
		var vertexBufferData = vertexBuffer.lock();
		var blockIndex = 0;
		var offset = 0;
		var blockIndex = 0;
		for (block in blocks) {
			if (block == 0){
				blockIndex++;
				continue;
			}

			var x = Math.floor(blockIndex/(chunkSize*chunkSize));
			var y = Math.floor(blockIndex/chunkSize)%chunkSize;
			var z = blockIndex%chunkSize;

			for (v in 0...Std.int(blockStructure.length/3)) {
				var face = Std.int(v/4);
				if (face == 0 && getBlock(x,y,z-1)==1)
					continue;

				vertexBufferData[offset++] = blockStructure[v*3+0]+x;
				vertexBufferData[offset++] = blockStructure[v*3+1]+y;
				vertexBufferData[offset++] = blockStructure[v*3+2]+z;

				vertexBufferData[offset++] = uv[v*2]  *16/256;
				vertexBufferData[offset++] = uv[v*2+1]*16/256;
			}
			blockIndex++;
		}
		vertexBuffer.unlock();

		// Index Data
		indexBuffer = new IndexBuffer(blocks.length * blockIndices.length, StaticUsage);
		var indexBufferData = indexBuffer.lock();
		var offset = 0;
		var blockIndex = 0;
		for (block in blocks) {
			if (block == 0) {
				continue;
			}
			for (i in 0...blockIndices.length) {
				indexBufferData[offset] = blockIndices[i]+blockIndex*(6*4);
				offset++;
			}
			blockIndex++;
		}
		indexBuffer.unlock();

		trace('Generated geometry. VB size: ${vertexBuffer.count()} IB size: ${indexBuffer.count()}');
	}

	function calculateMVP() {
		var projection = FastMatrix4.perspectiveProjection(45, kha.Window.get(0).width / kha.Window.get(0).height, .1, 100);
		var view = FastMatrix4.lookAt(camera.position.fast(), new FastVector3(5,5,5), new FastVector3(0,1,0));
		var model = FastMatrix4.identity();

		mvp = FastMatrix4.identity();
		mvp = mvp.multmat(projection);
		mvp = mvp.multmat(view);
		mvp = mvp.multmat(model);
	}

	public function update() {
		calculateMVP();
	}
	public function render(g:Graphics) {
		g.setPipeline(pipeline);

		g.setMatrix(mvpID, mvp);
		g.setTexture(textureID, kha.Assets.images.sprites);
		g.setTextureParameters(textureID, Clamp, Clamp, TextureFilter.PointFilter, TextureFilter.PointFilter, MipMapFilter.NoMipFilter);

		g.setVertexBuffer(vertexBuffer);
		g.setIndexBuffer(indexBuffer);

		g.drawIndexedVertices();
	}
}
