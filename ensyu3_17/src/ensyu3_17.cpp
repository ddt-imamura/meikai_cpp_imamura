/*
 * 関数名: main
 * 説明	: 新版明解C++ 演習問題3-17
 * 		 季節を求めるList3-1の月の読み込みにおいて、1～12以外の値が入力された場合は、再入力させるように
 * 		 変更したプログラムを作成する（do文の2重ループ構造になる）。
 * パラメータ:なし
 * 返り値:  0固定
 * 作成者: T.Imamura
 * 作成日: 2022.06.28
 * 備考:
 */
#include 	<string>
#include	<iostream>

using namespace std;
//以下List3-1の記述を元にする
int main() {

	string retry;	//もう一度？

	do {
		int month;	//入力月

		do {									//*****追加行*******
			//入力を促す
			cout << "季節を求めます。\n何月ですか：";
			//入力値を格納
			cin >> month;
		//1～12の範囲外なら繰り返し					//*****追加行*******
		} while ( month < 1 || month > 12 );	//*****追加行*******

		//3～5月は春
		if ( month >= 3 && month <= 5 ) {
			//季節を表示
			cout << "それは春です。\n";
		//6～8月は夏
		} else if ( month >= 6 && month <= 8 ) {
			//季節を表示
			cout << "それは夏です。\n";
		//9～11月は秋
		} else if ( month >= 9 && month <= 11 ) {
			//季節を表示
			cout << "それは秋です。\n";
		//12～2月は冬
		} else if ( month == 12 || month == 1 || month == 2 ) {
			//季節を表示
			cout << "それは冬です。\n";
		}
		//再入力を促す
		cout << "もう一度？ Y・・・Yes/N・・・No：";
		//入力値を格納
		cin >> retry;
	}while( retry == "Y" || retry == "y" );

	return 0;
}
