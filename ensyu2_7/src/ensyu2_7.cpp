/*
 * 関数名: main
 * 説明	: 新版明解C++	演習問題2-7
 * 		  ２つの実数値を読み込んで、大きい方の値を表示する。
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

	double firstNumber;		//１つめの入力値
	double secondNumber;	//２つめの入力値

	//1つ目の実数の入力を促す
	cout << "1つ目の実数値:";
	//1つ目の実数値を読み込む
	cin >> firstNumber;
	//２つ目の実数の入力を促す
	cout << "2つ目の実数値:";
	//２つ目の実数値を読み込む
	cin >> secondNumber;
	//条件演算子を使用して大きい方の値を表示する
	cout << "大きいほうの実数値は" << ((firstNumber > secondNumber) ? firstNumber : secondNumber) << "です。\n";

	return 0;
}
