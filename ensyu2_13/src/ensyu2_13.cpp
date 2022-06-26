/*
 * 関数名: main
 * 説明	: 新版明解C++	演習問題2-13
 * 		  ２つの整数値を読み込んで、降順に並べ替える。
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
	int temporaryNumber;	//演算時の一時保管用変数

	//1つ目の整数の入力を促す
	cout << "整数a : ";
	//1つ目の整数値を読み込む
	cin >> firstNumber;
	//２つ目の整数の入力を促す
	cout << "整数b : ";
	//２つ目の整数値を読み込む
	cin >> secondNumber;

	//整数aがbより小さい場合
	if ( firstNumber < secondNumber ) {
		//整数aの値を退避
		temporaryNumber = firstNumber;
		//整数aにbの値を移す
		firstNumber = secondNumber;
		//退避しておいた値を整数bに移す
		secondNumber = temporaryNumber;
	}
	//降順にソートしたことを通知
	cout << "a≦bとなるようにソートしました。\n";
	//大きい方の整数値を表示
	cout << "整数aは" << firstNumber << "です。\n";
	//小さい方の整数値を表示
	cout << "整数bは" << secondNumber << "です。\n";

	return 0;
}
