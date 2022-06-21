/*
 * クラス名: Enshu1_11
 * 概要	:キーボードから２つの実数値を読込み、その合計と平均を表示する。
 * 作成者:T.Imamura
 * 作成日:2022.06.13
 * 備考	:
 */

#include	<iostream>

using namespace std;
//main関数
int main() {
	//x, yは実数値
	double x, y;
	//xの入力を促す
	cout << "xの値 : ";
	//xに実数値を入れる
	cin >> x;
	//yの入力を促す
	cout << "yの値 : ";
	//yに実数値を入れる
	cin >> y;
	//xとyの合計値の表示を行う
	cout << "合計は" << x + y << "です。 \n";
	//xとyの平均値の表示を行う
	cout << "平均は" << (x + y)/2 << "です。 \n";

	return 0;
}
