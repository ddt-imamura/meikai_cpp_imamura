/*
 * 関数名: main
 * 説明	: 新版明解C++ 演習問題3-21
 *		  n段のピラミッドを表示する。
 * 		  なお、第i行目には(i-1)*2+1 の*が表示されること。
 * パラメータ:なし
 * 返り値:  0固定
 * 作成者: T.Imamura
 * 作成日: 2022.06.30
 * 備考:
 */

#include	<iostream>

using namespace std;

int main() {

	int stepNumber;	  //入力段数
	int asterNumber;  //各段に表示される*の数
	int lastAsterNumber;	//最終段の*の数
	int spaceNumber;		//空白文字の数(片側)

	//表示内容を通知
	cout << "ピラミッドを表示します。\n";

	do {
		cout << "2以上の段数を指定してください。\n";	//入力内容を通知
		cout << "段数は：";					//入力を促す
		cin	 >> stepNumber;					//入力値を格納
	}while (stepNumber < 2);				//ピラミッドを形成できる段数であることが条件

	//計算に用いるため、最終段の*の数を算出しておく
	lastAsterNumber = ((stepNumber - 1) * 2) + 1;

	//1段目から出力開始
	for ( int i = 1; i <= stepNumber; i++ ) {
		//まず、i段目の*の数を算出しておく
		asterNumber = (i-1) * 2 + 1;
		//空白文字の個数（片側）を算出（最終段の*の数 - i段目の*の数） / 2
		spaceNumber = (lastAsterNumber - asterNumber) / 2;
		//*の前に来る空白文字を出力
		for ( int j = 1; j <= spaceNumber; j++ ) {
			//空白文字を表示
			cout << ' ';
		}
		//*を指定数だけ出力
		for ( int k = 1; k <= asterNumber; k++ ) {
			//* を表示
			cout << '*';
		}
		//*の後ろに来る空白文字を出力
		for ( int l = 1; l <= spaceNumber; l++ ) {
			//空白文字を表示
			cout << ' ';
		}
		//次の段に移る
		cout << '\n';
	}

	return 0;
}
