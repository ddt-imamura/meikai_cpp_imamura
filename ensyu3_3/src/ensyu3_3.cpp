/*
 * 関数名: main
 * 説明	: 新版明解C++ 演習問題3-3
 * 		 ２つの整数値を読込み、小さい方の数以上で大きい方の数以下の全整数を小さい方から順に表示する。
 * パラメータ:なし
 * 返り値:  0固定
 * 作成者: T.Imamura
 * 作成日: 2022.06.21
 * 備考:
 */

#include	<iostream>

using namespace std;

int main() {

	int inputNumberFirst;	//1つ目の読み込み整数
	int inputNumberSecond;	//２つ目の読み込み整数

	//整数の入力を促す
	cout << "2つの整数4ｓ。\n";
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
