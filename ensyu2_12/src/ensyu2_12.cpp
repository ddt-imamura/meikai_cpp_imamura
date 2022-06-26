/*
 * 関数名: main
 * 説明	: 新版明解C++	演習問題2-12
 * 		  ２つの整数値を読み込んで、小さい方の値と大きい方の値の両方を表示する。、
 * 		  ただし、等しい場合は「二つの値は同じです。」と表示する。
 * パラメータ:なし
 * 返り値:  0固定
 * 作成者: T.Imamura
 * 作成日: 2022.06.20
 * 備考:
 */

#include <iostream>

using namespace std;

int main() {

	int firstNumber;		//整数aの入力値
	int secondNumber;		//整数bの入力値
	int maximumNumber;		//大きい方の整数
	int minimumNumber;		//小さい方の整数

	//1つ目の整数の入力を促す
	cout << "整数a : ";
	//1つ目の整数値を読み込む
	cin >> firstNumber;
	//２つ目の整数の入力を促す
	cout << "整数b : ";
	//２つ目の整数値を読み込む
	cin >> secondNumber;

	//整数aがbより大きい場合
	if ( firstNumber > secondNumber ) {
		//大きい方の整数にaを格納
		maximumNumber = firstNumber;
		//小さい方の整数にbを格納
		minimumNumber = secondNumber;
	//整数aがbより小さい場合
	} else if ( firstNumber < secondNumber ) {
		//大きい方の整数にbを格納
		maximumNumber = secondNumber;
		//小さい方の整数にaを格納
		minimumNumber = firstNumber;
		//整数aとbが等しい場合
	} else {
		//指定の表示を行い、関数を終了する
		cout << "二つの値は同じです。\n";
		return 0;
	}
	//小さい方の整数の表示を行う
	cout << "小さい方の値は" << minimumNumber <<  "です。\n";
	//大きい方の整数の表示を行う
	cout << "大きい方の値は" << maximumNumber <<  "です。\n";

	return 0;
}
