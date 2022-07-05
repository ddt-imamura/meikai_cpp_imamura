/*
 * 関数名: main
 * 説明	: 新版明解C++ 演習問題3-16
 * 		 1からnまでの整数値の２乗を表示するプログラムを作成する。
 * パラメータ:なし
 * 返り値:  0固定
 * 作成者: T.Imamura
 * 作成日: 2022.06.27
 * 備考:
 */

#include	<iostream>

using namespace std;

int main() {
	//入力値
	int inputNumber;

	do {
		//入力を促す
		cout << "nの値：";
		//入力値を格納
		cin >> inputNumber;
	//do文終了時の入力値は必ず正の値となっている
	} while ( inputNumber <= 0 );
	//ループ文により1から順に２乗した数を表示する
	for ( int i = 1; i <= inputNumber; i++ ) {
		//2乗した値を表示
		cout << i << "の２乗は" << ( i * i ) << '\n';
	}

	return 0;
}
