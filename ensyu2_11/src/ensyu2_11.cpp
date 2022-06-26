/*
 * 関数名: main
 * 説明	: 新版明解C++	演習問題2-11
 * 		  キーボード読み込んだ３つの整数値の中央値を表示する
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
	int medianNumber;		//A,B,Cの中央値

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
	//中央値を探索する
	//整数AがBより大きい場合
	if ( firstNumber > secondNumber ) {
		//整数AがCより小さい場合
		if ( firstNumber < thirdNumber ) {
			//中央値に整数Aを設定する
			medianNumber = firstNumber;
		}
		//整数AがC以上の場合
		else {
			//整数BがCより大きい場合
			if ( secondNumber > thirdNumber ) {
				//中央値に整数Bを設定
				medianNumber = secondNumber;
			//整数BがCより小さい場合
			} else {
				//中央値に整数Cを設定
				medianNumber = thirdNumber;
			}
		}
	//整数AがB以下の場合
	} else {
		//整数AがCより小さい場合
		if ( firstNumber < thirdNumber ) {
			//整数BがCより大きい場合
			if ( secondNumber > thirdNumber ) {
				//中央値に整Cを設定
				medianNumber = thirdNumber;
			//整数BがCより小さい場合
			} else {
				//中央値に整数Bを設定
				medianNumber = secondNumber;
			}
		//整数AがC以上の場合
		} else {
			//中央値に整数Aを設定
			medianNumber = firstNumber;
		}
	}
	//中央値を表示する
	cout << "3つの整数の中央値は" << medianNumber <<  "です。\n";

	return 0;
}
