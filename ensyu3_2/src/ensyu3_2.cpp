/*
 * 関数名: main
 * 説明	: 新版明解C++ 演習問題3-2
 * 		  2桁の整数値(10～99)を当てさせる数当てゲームを行う。
 * パラメータ:なし
 * 返り値:  0固定
 * 作成者: T.Imamura
 * 作成日: 2022.06.21
 * 備考:
 */
#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
	int randomNumber;	//生成した乱数値の格納変数
	int inputNumber;	//入力整数値の格納変数

	//生成した乱数が条件を満たすまで繰り返す
	do {
		//乱数の種を生成
		srand(time(NULL));
		//乱数(0～32767)から、さらに剰余算により0～99の乱数を生成
		randomNumber = rand() % 100;
	//99以下であることは確定の為、下限のみ条件とする
	} while( randomNumber < 10 );

	//ゲーム開始を通知
	cout << "数当てゲームを開始します。\n";
	//ルールを通知
	cout << "0～99の数を当ててください。\n";
	//生成した乱数(0～99)の数当てを行う
	do {
		//入力を促す
		cout << "いくつでしょう：";
		//入力値を変数に格納
		cin >> inputNumber;

		//不正な入力値でないことを確認する
		if ( (inputNumber >= 0) && ( inputNumber < 100 ) ) {
			//入力値が乱数値より小さい場合
			if ( inputNumber < randomNumber ) {
				//正解との大小関係を通知
				cout << "もっと大きい数です。\n";
				//入力値が乱数値より大きい場合
			} else if ( inputNumber > randomNumber ) {
				//正解との大小関係を通知
				cout << "もっと小さい数です。\n";
				//入力値と乱数値が一致している場合
			} else {
				cout << "正解です。\n";
			}
		//入力値が不正な場合
		} else {
			//やり直しを通知
			cout << "0～99の整数値を入力してください。\n";
		}
	//入力値が乱数値と一致していなければ繰り返し
	} while( inputNumber != randomNumber );

	return 0;
}
