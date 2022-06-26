/*
 * 関数名: main
 * 説明	: 新版明解C++	演習問題2-2
 * 		  教本List2-5のソースコードの最後のelseを、else if(n == 0)に変更するとどうなるか検証する。
 * パラメータ:なし
 * 返り値:  0固定
 * 作成者: T.Imamura
 * 作成日: 2022.06.20
 * 備考:
 */

#include <iostream>

using namespace std;

int main() {
	//ソースコードは教本どおりに記載する
	int n;
	cout << "整数値:";
	cin >> n;

	if ( n > 0 ) {
		cout << "その値は正です。\n";
	} else if ( n < 0 ) {
		cout << "その値は負です。\n";
	} else if ( n == 0 )  {		//変更前は } else {
		cout << "その値は0です。\n";
	}
}
//else if文に変更しても問題は起こらない
