/*
 * 関数名: main
 * 説明	: 新版明解C++ 演習問題3-19
 * 		 n段の正方形を*で表示する。
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

	//行を指定
	for ( int i = 1; i <= inputNumber; i++ ) {
		//1行当たりの数を指定
		for ( int j = 1; j <= inputNumber; j++ ) {
			//*を表示
			cout << '*';
		}
		//次の行に移る
		cout << '\n';
	}

	return 0;
}
