/*
 * 関数名: main
 * 説明	: 新版明解C++ 演習問題3-9
 * 		 正の整数値を0までカウントダウンする教本List3-4をfor文で実現する。
 * パラメータ:なし
 * 返り値:  0固定
 * 作成者: T.Imamura
 * 作成日: 2022.06.26
 * 備考:
 */

#include	<iostream>

using namespace std;
//以下、List3-4の記述を元にする
int main() {
	//入力値
	int x;
	//表示内容を通知
	cout << "カウントダウンします。\n";

	do {
		//入力を促す
		cout << "正の整数値：";
		//入力値を格納
		cin >> x;
	//do文終了時のxは必ず正の値となっている
	} while ( x <= 0 );

#if 0	//元の記述
	while ( x >= 0 ) {
		cout << x << "\n";	//xの値を表示
		x--;				//xの値をデクリメント
	}
#else	//変更後の記述
	//ループ変数iを利用してカウントダウンを実施
	for ( int i = 0; i <= x; i++ ) {
		cout << x - i << "\n";	//x-i=0になるまで値を表示
	}
#endif

	return 0;
}
