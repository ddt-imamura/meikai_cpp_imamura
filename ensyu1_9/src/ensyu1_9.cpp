/*
 * 関数名: main
 * 説明	: 新版明解C++　演習問題1-9
 * 		  キーボードから読み込んだ整数値をそのまま表示する。
 * パラメータ:なし
 * 返り値:  0固定
 * 作成者: T.Imamura
 * 作成日: 2022.06.14
 * 備考:
 */

#include	<iostream>

using namespace std;
//main関数
int main() {
	//入力値を格納する変数
	int integerValue;
	//整数値の入力を促す
	cout << "整数値：";
	//integerValueに整数値を格納
	cin >> integerValue;
	//入力した整数値の表示を行う
	cout << integerValue << "と入力しましたね。 \n";

	return 0;
}
