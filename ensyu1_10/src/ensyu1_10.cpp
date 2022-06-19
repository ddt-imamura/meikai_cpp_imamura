/*
 * 関数名: main
 * 説明	: 新版明解C++　演習問題1-10
 * 		  キーボードから読み込んだ整数値に10を加えた値と10を減じた値を表示する。
 * パラメータ:なし
 * 返り値:  0固定
 * 作成者: T.Imamura
 * 作成日: 2022.06.14
 * 備考:
 */

#include	<iostream>

using namespace std;

int main() {
	//入力値を格納する変数
	int integerValue;
	//整数値の入力を促す
	cout << "整数値：";
	//入力された整数値を格納する
	cin >> integerValue;
	//入力値に10を加えた値の表示を行う
	cout << "10を加えた値は" << integerValue + 10 << "です。 \n";
	//入力値から10を減じた値の表示を行う
	cout << "10を減じた値は" << integerValue - 10 << "です。 \n";

	return 0;
}
