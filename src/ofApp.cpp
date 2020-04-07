#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	ofSetFrameRate(60);

	// define a variable.
	int x = 10; // 4bytes�K�v int��4�o�C�g�K�v�ł��Ƃ����Ӗ�
	char c = 'c'; // 1byte�K�v

	// # pointer to x.
	int* ptr = &x; // ptr��x�������Ă��郁�����̏ꏊ(�ԍ���������)
	std::cout << ptr << std::endl; // �������̔ԍ���\��
	std::cout << *ptr << std::endl; // �������ɓ����Ă���l��\��

	// ofApp.h ��f�Ƃ����֐��ɓn���D
	ofImage img;
	f(&img);

	int arr[10]; // 4 * 10 bytes�K�v
	// 1[****]2[****]3[****].....10[****]

	std::cout << arr << std::endl; // �z���1�ڂ̒l��pointer�^�ŕԂ����
	std::cout << &arr[0] << std::endl; // ��ɕ\�������l�ƈꏏ
	std::cout << &arr[1] << std::endl; // ��L�̃R�[�h���4byte�オ��

	// # iterator
	// ���int arr[10];�Ɠ�������.
	std:vector<int> v {1, 2, 3, 4}; //4�͂����Ă���
	auto first = std::begin(v); // v�̈�ԍŏ���pointer�^���o��
	auto last = std::end(v); // v�̍Ō��pointer�^���o��
	// std::begin(v); or v.begin();��

	//std::for_each(v.begin(), v.end(), [](int x)) {
	//	std::cout << x << std::endl;
	//}

	// �ŏ��ƍŌコ���킩��΁C����𓊂��Ă��ΕK�v�Œ����copy�����ōς�
	// iterator������!
	std::reverse(first, last);
	std::min_element(first, last);

	// data structure
	// sequencial�� (������)
	// [][][][].....[]��������ɉ����тɂȂ��Ă��遨�}��(insert)�Ɏア
	
	// list�� (�����тł͂Ȃ�)
	// [3]��[4]��[2]��[1]��    ����͑}���ɋ���
	// ����͉����тł͂Ȃ��ꏊ�����̖�� �܂�[2]�����Ă����͂ǂ����Ȃ��Ă��� [3]��[2]��[4]��[2]��[1]��
	// �t��0�ڂ̐�����T���Ƃ��͂ł��Ȃ��D

	// �f�[�^�\��
	// std::deque
	// std::forward_list
	// std::map
	// std::unordered_map
	// std::array 
	// etc.

	// ����pointer�^���g���̂ł͂Ȃ��Citerator�^���g���ƁC���̃f�[�^�\���ɍ������l���o���Ă����

	std::vector<int> sarr{ 1,2,3 };
	std::list<int> larr{ 3,4,5 };

	std::reverse(sarr.begin(), sarr.end());
	std::reverse(larr.begin(), larr.end());

	// about auto
	// auto���g���ƌ^�𐄒肵�Ă����
	auto test = 3; // int
	auto test2 = 241341524352; // long
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

}