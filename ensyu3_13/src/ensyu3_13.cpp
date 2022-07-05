/*
 * 関数名: main
 * 説明	: 新版明解C++ 演習問題3-13
 * 		 身長と標準体重の対応表を表示する。
 * 		 表示する身長の範囲（開始値/終了値/増分）は整数値として読み込む。
 * 		 ただし標準体重は（身長-100）×0.9によって求める。
 * パラメータ:なし
 * 返り値:  0固定
 * 作成者: T.Imamura
 * 作成日: 2022.06.27
 * 備考:
 */

#include	<iostream>

using namespace std;

int main() {

	int heightBottom;	//身長の開始値
	int heightTop;		//身長の終了値
	int heightInterval;	//身長の増分

	//身長の開始値を入力させる
	do {
		//入力を促す
		cout << "何cmから：";
		//入力値を格納
		cin >> heightBottom;
	//身長の下限が指定されていないため、130cmを暫定値とする
	} while ( heightBottom < 130 );

	//身長の終了値を入力させる
	do {
		//入力を促す
		cout << "何cmまで：";
		//入力値を格納
		cin >> heightTop;
	//do文終了時は開始値より大きい
	} while ( heightTop <= heightBottom );

	//身長の増分を入力させる
	do {
		//入力を促す
		cout << "何cmごと：";
		//入力値を格納
		cin >> heightInterval;
	//do文終了時は0より大きい
	} while ( heightInterval <= 0 );

	//身長、標準体重の項目を表示
	cout << "身長" << "   " << "標準体重\n";

	//身長、標準体重を増分ごとに昇順に表示する
	for ( int i = heightBottom; i <= heightTop; i = i + heightInterval ) {
		//身長と標準体重を表示
		cout << i << "   " << ((i - 100) * 0.9) << '\n';
	}

	return 0;
}
