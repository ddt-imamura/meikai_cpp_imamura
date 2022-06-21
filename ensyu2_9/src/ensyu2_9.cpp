/*
 * 関数名: main
 * 説明	: 新版明解C++	演習問題2-9
 * 		  ２つの整数値を読み込んで、それらの値の差が10以下であれば「それらの差は10以下です。」と表示し、
 * 		  そうでなければ「それらの差は11以上です。」と表示する。
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

	int firstNumber;		//整数Aの入力値
	int secondNumber;		//整数Bの入力値
	int differentNumber;	//整数A,Bの差

	//1つ目の整数の入力を促す
	cout << "整数A : ";
	//1つ目の整数値を読み込む
	cin >> firstNumber;
	//２つ目の整数の入力を促す
	cout << "整数B : ";
	//２つ目の整数値を読み込む
	cin >> secondNumber;
	//条件演算子を使用して2数の差を求める
	differentNumber = ( (firstNumber >= secondNumber) ? (firstNumber - secondNumber) : (secondNumber - firstNumber) );
	//差が10以下の場合
	if ( differentNumber < 11 ) {
		//指定の表示を行う
		cout << "それらの差は10以下です。";
	//差が11以上の場合
	} else {
		//指定の表示を行う
		cout << "それらの差は11以上です。";
	}
	return 0;
}
