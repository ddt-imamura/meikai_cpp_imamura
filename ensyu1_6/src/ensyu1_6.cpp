/*
 * 関数名: main
 * 説明	: 新版明解C++　演習問題1-6
 * 		  教本List1-7のプログラムを変更し、小数部をもつ実数値をint型変数x,yに代入するプログラムを作成し、
 * 　　　　　 実行結果からint型変数が整数値のみしか扱えないことを確認する。
 * パラメータ:なし
 * 返り値:  0固定
 * 作成者: T.Imamura
 * 作成日: 2022.06.13
 * 備考:
 */

#include	<iostream>

using namespace std;

int main() {
	//教本にて変数x,yの指定あり
	int x;	//xはint型の変数
	int y;	//yはint型の変数
	/* 小数部をもつ実数値を代入 */
	x = 63.5;
	/* 小数部をもつ実数値を代入 */
	y = 18.5;
	//xの値を表示
	cout << "xの値は" << x << "です。\n";
	//yの値を表示
	cout << "yの値は" << y << "です。\n";
	//xとyの合計を表示
	cout << "合計の値は" << x + y << "です。\n";
	//xとyの平均を表示
	cout << "平均の値は" << (x + y) / 2 << "です。\n";

	return 0;
}
