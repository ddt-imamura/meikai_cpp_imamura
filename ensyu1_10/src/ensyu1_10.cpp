/*
 * クラス名: Enshu1_10
 * 概要	:キーボードから読み込んだ整数値に10を加えた値と10を減じた値を表示する。
 * 作成者:T.Imamura
 * 作成日:2022.06.13
 * 備考	:
 */

#include	<iostream>

using namespace std;
//main関数
int main() {
	//xは整数値
	int x;
	//整数値の入力を促す
	cout << "整数値：";
	//xに整数値を入れる
	cin >> x;
	//入力値に10を加えた値の表示を行う
	cout << "10を加えた値は" << x + 10 << "です。 \n";
	//入力値から10を減じた値の表示を行う
	cout << "10を減じた値は" << x - 10 << "です。 \n";

	return 0;
}
