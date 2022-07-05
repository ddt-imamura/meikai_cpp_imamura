/*
 * 関数名: main
 * 説明	: 新版明解C++ 演習問題3-12
 * 		 3-11のプログラムを書き換え、式として表示せよ。
 * パラメータ:なし
 * 返り値:  0固定
 * 作成者: T.Imamura
 * 作成日: 2022.06.27
 * 備考:
 */

#include	<iostream>

using namespace std;
//以下List3-9の記述を元にする
int main() {
	//入力値
	int n;

	do {
		//入力を促す
		cout << "nの値：";
		//入力値を格納
		cin >> n;
	//do文終了時のnは必ず正の値となっている
	} while ( n <= 0 );

	//合計値を初期化
	int sum = 0;
	//1からn-1までの和を求める
	for ( int i = 1; i < n; i++ ) {
		//加算する値を表示
		cout << i << " + ";
		//i=n-1入力値になるまで加算
		sum += i;
	}
	//合計値にnを加算
	sum += n;
	//式の残りを表示する
	cout << n << " = " << sum;

	return 0;
}
