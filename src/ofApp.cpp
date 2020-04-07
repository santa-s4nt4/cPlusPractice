#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	ofSetFrameRate(60);

	// define a variable.
	int x = 10; // 4bytes必要 intは4バイト必要ですという意味
	char c = 'c'; // 1byte必要

	// # pointer to x.
	int* ptr = &x; // ptrはxが入っているメモリの場所(番号を教える)
	std::cout << ptr << std::endl; // メモリの番号を表示
	std::cout << *ptr << std::endl; // メモリに入っている値を表示

	// ofApp.h のfという関数に渡す．
	ofImage img;
	f(&img);

	int arr[10]; // 4 * 10 bytes必要
	// 1[****]2[****]3[****].....10[****]

	std::cout << arr << std::endl; // 配列の1個目の値のpointer型で返される
	std::cout << &arr[0] << std::endl; // 上に表示される値と一緒
	std::cout << &arr[1] << std::endl; // 上記のコードより4byte上がる

	// # iterator
	// 上のint arr[10];と同じ感じ.
	std:vector<int> v {1, 2, 3, 4}; //4つはいっている
	auto first = std::begin(v); // vの一番最初のpointer型が出る
	auto last = std::end(v); // vの最後のpointer型が出る
	// std::begin(v); or v.begin();↑

	//std::for_each(v.begin(), v.end(), [](int x)) {
	//	std::cout << x << std::endl;
	//}

	// 最初と最後さえわかれば，それを投げてやれば必要最低限のcopyだけで済む
	// iteratorすごい!
	std::reverse(first, last);
	std::min_element(first, last);

	// data structure
	// sequencial↓ (横並び)
	// [][][][].....[]メモリ上に横並びになっている→挿入(insert)に弱い
	
	// list↓ (横並びではない)
	// [3]→[4]→[2]→[1]→    これは挿入に強い
	// これは横並びではなく場所だけの問題 つまり[2]を入れても後ろはどかさなくていい [3]→[2]→[4]→[2]→[1]→
	// 逆に0個目の数字を探すとかはできない．

	// データ構造
	// std::deque
	// std::forward_list
	// std::map
	// std::unordered_map
	// std::array 
	// etc.

	// 生のpointer型を使うのではなく，iterator型を使うと，そのデータ構造に合った値を出してくれる

	std::vector<int> sarr{ 1,2,3 };
	std::list<int> larr{ 3,4,5 };

	std::reverse(sarr.begin(), sarr.end());
	std::reverse(larr.begin(), larr.end());

	// about auto
	// autoを使うと型を推定してくれる
	auto test = 3; // int
	auto test2 = 241341524352; // long
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

}