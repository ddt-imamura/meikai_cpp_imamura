/*
 * 関数名: main
 * 説明	: 新版明解C++	演習問題2-10
 * 		  キーボードから３つの整数値を読み込んで、その最小値を表示する
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
	int thirdNumber;		//整数Cの入力値
	int minimumNumber;		//A,B,C中の最小値

	//1つ目の整数の入力を促す
	cout << "整数A : ";
	//1つ目の整数値を読み込む
	cin >> firstNumber;
	//２つ目の整数の入力を促す
	cout << "整数B : ";
	//２つ目の整数値を読み込む
	cin >> secondNumber;
	//条件演算子を使用して2数の差を求める
	//３つ目の整数の入力を促す
	cout << "整数C : ";
	//３つ目の整数値を読み込む
	cin >> thirdNumber;

	//最小の入力値を探索する
	//まず整数Aの値で初期化する
	minimumNumber = firstNumber;
	//整数AとBを比較する
	if ( secondNumber < minimumNumber ) {
		//整数Bのほうが小さければ最小値を更新する
		minimumNumber = secondNumber;
	//整数A,Bの小さいほうと整数Cを比較する
	} else if ( thirdNumber < minimumNumber ) {
		//整数Cのほうが小さければ最小値を更新する
		minimumNumber = thirdNumber;
	//整数Aが最小の場合
	} else {
		//何もしない
	}
	//最小値を表示する
	cout << "3つの中で最小の数は" << minimumNumber <<  "です。\n";

	return 0;
}
