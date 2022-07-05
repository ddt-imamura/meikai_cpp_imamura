/*
 * 関数名: main
 * 説明	: 新版明解C++ 演習問題3-18
 * 		 九九の表を表示するList3-13をsetw操作子を用いることなく実現するように書き替える。
 * パラメータ:なし
 * 返り値:  0固定
 * 作成者: T.Imamura
 * 作成日: 2022.06.28
 * 備考:
 */
#include 	<iomanip>
#include	<iostream>

using namespace std;
//以下List3-13の記述を元にする
int main()
{
	//1～9の段
	for ( int i = 1; i <= 9; i++ ) {
		//各段の数にかける数(1～9)
		for ( int j = 1; j <= 9; j++ ) {
#if 0	//変更前
			//各数を3桁で表示
			cout << setw(3) << i * j;
#else	//変更後

			int k = i * j;
			//百の位は存在しないため空白文字
			cout << ' ';
			//十の位が0なら空白文字を表示
			if ((k / 10) == 0) {
				cout <<  ' ';
			//十の位の数が0以外なら表示
			} else {
				cout <<  k / 10;
			}
			//一の位
			cout <<  k % 10;
#endif
		}
		//次の段へ移る
		cout << '\n';
	}

	return 0;
}
