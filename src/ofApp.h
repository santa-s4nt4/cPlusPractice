#pragma once

#include "ofMain.h"

inline void f(ofImage* img) {
	// 640 * 320 = 232412532 * 3bytes
	// この関数を使うたびにcopyをするためメモリがめちゃくちゃ取られる．
	// 画像がどのメモリ番号にあるかだけを示せば重くならない．
	// データ自体ではなく場所の値をcopyするだけなので全然重くない.
	// 232412532 * 3bytes → about 4bytes(pointer型)
}

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();		
};
