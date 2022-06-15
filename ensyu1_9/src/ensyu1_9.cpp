/*
 * クラス名: Enshu1_9
 * 概要	:キーボードから読み込んだ整数値をそのまま表示する。
 * 作成者:T.Imamura
 * 作成日:2022.06.13
 * 備考	:
 */

#include	<iostream>

using namespace std;
//main関数
int main() {
	//xは整数値
	int x;
	//整数値の入力を促す
	cout << "整数値：";
	//xに整数値を入れる
	cin >> x;
	//入力した整数値の表示を行う
	cout << x << "と入力しましたね。 \n";

	return 0;
}
