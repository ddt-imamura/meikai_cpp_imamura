/*
 * 関数名: main
 * 説明	: 新版明解C++ 演習問題3-3
 * 		 ２つの整数値を読込み、小さい方の数以上で大きい方の数以下の全整数を小さい方から順に表示する。
 * パラメータ:なし
 * 返り値:  0固定
 * 作成者: T.Imamura
 * 作成日: 2022.06.21
 * 備考:
 */

#include	<iostream>

using namespace std;

int main() {

	int inputNumberFirst;	//1つ目の読み込み整数
	int inputNumberSecond;	//２つ目の読み込み整数
	int inputNumberLarge;	//読み込み整数の大きい方
	int inputNumberSmall;	//読み込み整数の小さい方


	//１つめの整数の入力を促す
	cout << "整数A ： ";
	//1つ目の整数値を格納
	cin >> inputNumberFirst;
	//２つめの整数の入力を促す
	cout << "整数B : ";
	//２つ目の整数値を格納
	cin >> inputNumberSecond;

	//1つ目の整数値の方が大きい場合
	if ( inputNumberFirst > inputNumberSecond )
	{
		//大きい方の整数に1つ目の整数値を代入
		inputNumberLarge = inputNumberFirst;
		//小さい方の整数に２つ目の整数値を代入
		inputNumberSmall = inputNumberSecond;
		//２つ目の整数値の方が大きい場合
	} else
	{
		//大きい方の整数に２つ目の整数値を代入
		inputNumberLarge = inputNumberSecond;
		//小さい方の整数に１つ目の整数値を代入
		inputNumberSmall = inputNumberFirst;
	}
	//小さい方の整数から繰り返しで表示
	do {
		//小さい方の整数から表示を始める
		cout << inputNumberSmall << ' ';
		//次の整数値に更新
		inputNumberSmall++;
	//大きい方の整数を超えない限り
	} while ( inputNumberSmall <= inputNumberLarge );

	return 0;
}
