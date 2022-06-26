/*
 * 関数名: main
 * 説明	: 新版明解C++　演習問題1-8
 * 		  int型変数に実数の初期化子を与えるとどうなるかを確認する。
 * パラメータ:なし
 * 返り値:  0固定
 * 作成者: T.Imamura
 * 作成日: 2022.06.14
 * 備考:
 */

#include	<iostream>

using namespace std;

int main() {
	//int型の変数integerValueに実数初期化子を与える
	int integerValue = 1.5;
	//integerValueの値を表示
	cout << "integerValueの値は" << integerValue << "です。\n";

	return 0;
}
//実数部が切り捨てられ、1と表示される
