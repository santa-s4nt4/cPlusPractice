#pragma once

#include "ofMain.h"

inline void f(ofImage* img) {
	// 640 * 320 = 232412532 * 3bytes
	// ���̊֐����g�����т�copy�����邽�߃��������߂��Ⴍ��������D
	// �摜���ǂ̃������ԍ��ɂ��邩�����������Ώd���Ȃ�Ȃ��D
	// �f�[�^���̂ł͂Ȃ��ꏊ�̒l��copy���邾���Ȃ̂őS�R�d���Ȃ�.
	// 232412532 * 3bytes �� about 4bytes(pointer�^)
}

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();		
};
