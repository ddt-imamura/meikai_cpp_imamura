/*
 * 関数名: main
 * 説明	: 新版明解C++　演習問題1-13
 * 		  以下に示すプログラムを作成する。
 * 		  ①1桁の正の整数値(1以上9以下の値)をランダムに生成して表示。
 * 		  ②1桁の負の整数値(-9以上-1以下の値)をランダムに生成して表示。
 * 		  ③2桁の正の整数値(10以上99以下の値)をランダムに生成して表示。
 * パラメータ:なし
 * 返り値:  0固定
 * 作成者: T.Imamura
 * 作成日: 2022.06.14
 * 備考:
 */
#include	<ctime>
#include	<cstdlib>
#include	<iostream>

using namespace std;

int main() {

	int firstRandomValue;	//1つ目の乱数用変数を宣言
	int secondRandomValue;	//２つ目の乱数用変数を宣言
	int thirdRandomValue;	//３つ目の乱数用変数を宣言
	//乱数の種を設定
	srand(time (NULL));

	do {
		//①の乱数値の生成
		firstRandomValue = rand() % 10;
	//0が出たらやり直し
	} while( firstRandomValue == 0 );

	do {
		//②の乱数値の生成
		secondRandomValue = rand() % 10;
	//0が出たらやり直し
	} while( secondRandomValue == 0 );
	//正負を反転させる
	secondRandomValue = -secondRandomValue;

	do {
		//③の乱数値の生成
		thirdRandomValue = rand() % 100;
	//10以上の値に限定
	} while( thirdRandomValue < 10 );

	//①の乱数値を表示する
	cout << "0～9の乱数値 : " 	<< firstRandomValue << "\n";
	//②の乱数値を表示する
	cout << "-9～-1の乱数値 : " << secondRandomValue << "\n";
	//③の乱数値を表示する
	cout << "10～99の乱数値 : " << thirdRandomValue << "\n";

	return 0;
}
