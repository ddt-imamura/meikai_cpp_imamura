/*
 * 関数名: main
 * 説明	: 新版明解C++ 演習問題3-11
 * 		 1からnまでの和を求めるList3-9をfor文で実現する。
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
	//表示内容を通知
	cout << "1からnまでの和を求めます。\n";

	do {
		//入力を促す
		cout << "nの値：";
		//入力値を格納
		cin >> n;
	//do文終了時のnは必ず正の値となっている
	} while ( n <= 0 );

	//合計値を初期化
	int sum = 0;
#if 0	//変更前
	//ループ変数を定義
	int i = 0;
	//ループ処理で和を求めていく
	while ( i <= n ) {
		sum += i;	//sumにiを加える
		i++;		//iをインクリメント
	}
#else	//変更後
	//ループ変数iを利用して和を求める
	for ( int i = 0; i <= n; i++ ) {
		//i=入力値になるまで加算
		sum += i;
	}
#endif
	//合計値を通知する
	cout << "1から" << n << "までの和は" << sum << "です。\n";

	return 0;
}
