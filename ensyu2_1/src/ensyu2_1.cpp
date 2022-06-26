/*
 * 関数名: main
 * 説明	: 新版明解C++	演習問題2-1
 * 		  読み込んだ整数値の絶対値を求めて表示する。
 * パラメータ:なし
 * 返り値:  0固定
 * 作成者: T.Imamura
 * 作成日: 2022.06.20
 * 備考:
 */

#include <iostream>

using namespace std;

int main() {

	int inputNumber;	//読み込んだ整数値を格納する変数
	int outputNumber;	//画面に表示する絶対値を格納する変数

	//整数値の入力を促す
	cout << "整数値:";
	//整数値を読み込む
	cin >> inputNumber;
	//読み込んだ整数値が正または0の場合
	if( inputNumber >= 0 ){
		//読み込んだ値をそのまま表示する
		outputNumber = inputNumber;
	//読み込んだ整数値が負の場合
	} else {
		//読み込んだ値を反転させる
		outputNumber = -inputNumber;
	}
	//読み込んだ整数値の絶対値を表示する
	cout << "その絶対値は" << outputNumber << "です。\n";

	return 0;
}
