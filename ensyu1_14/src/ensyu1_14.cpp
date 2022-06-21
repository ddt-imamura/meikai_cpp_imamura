/*
 * クラス名: Enshu1_14
 * 概要	:キーボードから読み込んだ整数値の-5～+5の値を表示する
 * 作成者:T.Imamura
 * 作成日:2022.06.14
 * 備考	:
 */

#include	<ctime>
#include	<cstdlib>
#include	<iostream>

using namespace std;
//main関数
int main() {
	//乱数格納用の変数を宣言
	int x, y, z;
	//乱数の種を設定
	srand(time (NULL));

	//①の乱数値の生成
	do {
		x = rand() % ;
	//0が出たらやり直し
	} while( x == 0 );

	//②の乱数値の生成
	do {
		y = rand() % 10;
	//0が出たらやり直し
	} while( y == 0 );
	//正負を反転させる
	y = -y;

	//③の乱数値の生成
	do {
		z = rand() % 100;
	//10以上の値に限定
	} while( z < 10 );

	//①の乱数値を表示する
	cout << "0～9の乱数値 : " 	<< x << "\n";
	cout << "-9～-1の乱数値 : " << y << "\n";
	cout << "10～99の乱数値 : " << z << "\n";

	return 0;
}
