/*
 * 関数名: main
 * 説明	: 新版明解C++ 演習問題3-6
 * 		 読み込んだ値の個数だけ+、‐を交互に表示する。
 * パラメータ:なし
 * 返り値:  0固定
 * 作成者: T.Imamura
 * 作成日: 2022.06.26
 * 備考:
 */

#include	<iostream>

using namespace std;

int main() {
	//入力値
	int inputNumber;
	//表示内容を通知
	cout << "何個+,-を表示しますか：";
	//入力値を格納
	cin >> inputNumber;

	//ループ変数の定義
	int i = 0;
	//入力値の回数だけ表示を繰り返し
	while ( i < inputNumber ) {
		//iが奇数と偶数を交互に取ることを利用し、交互表示の実現は剰余残を用いて行う
		//iが奇数の時(余りが1)
		if( i % 2 ) {
			//-を表示
			cout << "- ";
		}
		//iが偶数の時
		else {
			//+を表示
			cout << "+ ";
		}
		//ループ回数を更新
		i++;
	};
	return 0;
}
