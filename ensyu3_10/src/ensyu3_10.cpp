/*
 * 関数名: main
 * 説明	: 新版明解C++ 演習問題3-10
 * 		 0から正の整数値までカウントアップする。
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
	//表示内容を通知
	cout << "カウントアップします。\n";

	do {
		//入力を促す
		cout << "正の整数値：";
		//入力値を格納
		cin >> inputNumber;
	//do文終了時の入力値は必ず正の値となっている
	} while ( inputNumber <= 0 );

	//ループ変数iを利用してカウントアップを実施
	for ( int i = 0; i <= inputNumber; i++ ) {
		//i=入力値になるまで値を表示
		cout << i << "\n";
	}

	return 0;
}
