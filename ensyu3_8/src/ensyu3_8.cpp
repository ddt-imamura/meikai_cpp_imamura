/*
 * 関数名: main
 * 説明	: 新版明解C++ 演習問題3-8
 * 		 読み込んだ文字が1未満であれば改行文字を出力しないように、教本List3-10を書き換えたプログラムを作成する。
 * パラメータ:なし
 * 返り値:  0固定
 * 作成者: T.Imamura
 * 作成日: 2022.06.26
 * 備考:
 */

#include	<iostream>

using namespace std;
//以下、List3-10(入力値の数だけ*を表示する)の記述を元にする
int main() {
	//入力値
	int n;

	do {					//******追加行********
		//入力を促す
		cout << "何個*を表示しますか ：";
		//入力値を格納
		cin >> n;
	} while ( n < 1 );		//******追加行*****条件を満たさない限りやり直し（改行文字を出力しない）

	//ループ文で指定回数の出力を行う
	for ( int i = 0; i < n; i++ ) {
		//*を表示
		cout << '*';
	}
	//改行文字出力
	cout << '\n';

	return 0;
}