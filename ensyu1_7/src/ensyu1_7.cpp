/*
 * 関数名: main
 * 説明	: 新版明解C++　演習問題1-7
 * 		  ３つのint型変数に値を代入し、それらの平均と合計をもとめる。
 * パラメータ:なし
 * 返り値:  0固定
 * 作成者: T.Imamura
 * 作成日: 2022.06.14
 * 備考:
 */

#include	<iostream>

using namespace std;

int main() {
	int firstValue;		//1つ目のint型変数
	int SecondtValue;	//２つ目のint型変数
	int thirdValue;		//3つ目のint型変数

	firstValue = 63;	/* 1つ目のint型変数に値を代入 */
	SecondtValue = 18;	/* ２つ目のint型変数に値を代入 */
	thirdValue = 15;	/* ３つ目のint型変数に値を代入 */
	//1つ目のint型変数の値を表示
	cout << "xの値は" << firstValue << "です。\n";
	//２つ目のint型変数の値を表示
	cout << "yの値は" << SecondtValue << "です。\n";
	//３つ目のint型変数の値を表示
	cout << "zの値は" << thirdValue << "です。\n";
	//３つの整数値の合計を表示
	cout << "合計の値は" << firstValue + SecondtValue + thirdValue << "です。\n";
	//３つの変数値の合計を表示
	cout << "平均の値は" << (firstValue + SecondtValue + thirdValue) / 3 << "です。\n";

	return 0;
}
