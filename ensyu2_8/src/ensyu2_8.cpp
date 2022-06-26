/*
 * 関数名: main
 * 説明	: 新版明解C++	演習問題2-8
 * 		  ２つの整数値を読み込んで、それらの値の差を表示する。
 * 		  ただし、条件演算子を使用すること。
 * パラメータ:なし
 * 返り値:  0固定
 * 作成者: T.Imamura
 * 作成日: 2022.06.20
 * 備考:
 */

#include <iostream>

using namespace std;

int main() {

	int firstNumber;	//１つめの入力値
	int secondNumber;	//２つめの入力値

	//1つ目の整数の入力を促す
	cout << "1つ目の整数値:";
	//1つ目の整数値を読み込む
	cin >> firstNumber;
	//２つ目の整数の入力を促す
	cout << "2つ目の整数値:";
	//２つ目の整数値を読み込む
	cin >> secondNumber;
	//条件演算子を使用して差の値を表示する
	cout << "2つの整数値の差は" << ( (firstNumber > secondNumber) ? (firstNumber - secondNumber) : (secondNumber - firstNumber) ) << "です。\n";

	return 0;
}
