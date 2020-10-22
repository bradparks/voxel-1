package ;

import kha.input.Keyboard;
import kha.input.Mouse;

class Input {
    public var forwards = false;
    public var backwards = false;
    public var left = false;
    public var right = false;
    public var focused = false;
    public var jumpAttemptCallback:Void->Void = function(){};

    public function new(camera:Camera) {

		Mouse.get().notify(
            function mouseDown(b,x,y){
                focused=true;
                Mouse.get().lock();
            },
            function(b,x,y){
                // Mouse.get().unlock();
            },
            function(x,y,dx,dy){
                if (!focused)
                    return;
                camera.horizontalAngle -= dx/400;
                camera.verticalAngle -= dy/400;
            }, function onScroll(delta){
            }
        );

		Keyboard.get().notify(function down(key){
			if (key == W) {	forwards = true; }
			if (key == A) {	left = true; }
			if (key == S) {	backwards = true; }
            if (key == D) {	right = true; }

            if (key == Escape) {
                focused = false;
                Mouse.get().unlock();
            }
		}, function up(key){
			if (key == W) {	forwards = false; }
			if (key == A) {	left = false; }
			if (key == S) {	backwards = false; }
            if (key == D) {	right = false; }
		});
    }
}