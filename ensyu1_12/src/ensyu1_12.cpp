/*
 * 関数名: main
 * 説明	: 新版明解C++　演習問題1-12
 * 		　 キーボードから三角形の底辺と高さを読込み、その面積を表示する。
 * パラメータ:なし
 * 返り値:  0固定
 * 作成者: T.Imamura
 * 作成日: 2022.06.14
 * 備考:
 */

#include	<iostream>

using namespace std;

int main() {

	double heightValue;	//高さ
	double bottomValue; //底辺
	//計算の内容を表示
	cout << "三角形の面積を求めます。\n";
	//底辺の入力を促す
	cout << "底辺 : ";
	//底辺を変数に格納する
	cin >> bottomValue;
	//高さの入力を促す
	cout << "高さ : ";
	//高さを変数に格納する
	cin >> heightValue;
	//底辺と高さの値から三角形の面積を計算し、表示を行う
	cout << "面積は" << (bottomValue * heightValue) / 2 << "です。 \n";

	return 0;
}
