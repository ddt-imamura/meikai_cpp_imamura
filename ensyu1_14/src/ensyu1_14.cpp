/*
 * 関数名: main
 * 説明	: 新版明解C++　演習問題1-14
 * 		　　キーボードから読み込んだ整数値プラスマイナス5の範囲の整数をランダムに生成して表示する。
 * パラメータ:なし
 * 返り値:  0固定
 * 作成者: T.Imamura
 * 作成日: 2022.06.15
 * 備考:
 */
#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
	//入力整数値の格納変数を宣言
	int inputNumber;
	//整数値の入力を促す
	cout << "整数値 : ";
	//入力値を格納変数に入れる
	cin >> inputNumber;
	//乱数の種を生成
	srand(time(NULL));
	//乱数(0～32767)の1つ目を生成
	int randomNumberFirst = rand();
	//乱数(0～32767)の２つ目を生成
	int randomNumberSecond = rand();
	//入力値と2つの乱数から入力値±5の乱数を生成
	int randomNumberOutput = inputNumber + ((randomNumberFirst - randomNumberSecond) % 6);
	//生成した乱数を表示する
	cout << "その値の±5の乱数を生成しました。それは" << randomNumberOutput << "です。\n";

	return 0;
}
