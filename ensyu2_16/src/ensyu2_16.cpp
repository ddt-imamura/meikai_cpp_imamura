/*
 * 関数名: main
 * 説明	: 新版明解C++	演習問題2-16
 * 		  月を1～12の整数値として読み込み、それに対応する季節を表示する。
 * 		  ただし、switch文にて記述すること。
 * パラメータ:なし
 * 返り値:  0固定
 * 作成者: T.Imamura
 * 作成日: 2022.06.21
 * 備考:
 */

#include <ctime>
#include <iostream>

using namespace std;

int main() {
	//取得した月の格納変数
	int monthNumber;

	//現在の暦時刻を取得
	time_t current = time(NULL);
	//要素別の時刻（地方時）を取得
	struct tm* timer = localtime(&current);
	//現在の月を取得
	monthNumber = timer->tm_mon + 1;

	//表示内容を説明する
	cout << "現在の季節：";
	//取得した月の値で場合分けを行う
	switch ( monthNumber ){
		//1の場合：冬
		case 1 :
			//"冬"と表示する
			cout << "冬\n";
			break;
		//2の場合：冬
		case 2 :
			//"冬"と表示する
			cout << "冬\n";
			break;
		//3の場合：春
		case 3 :
			//"春"と表示する
			cout << "春\n";
			break;
		//4の場合：春
		case 4 :
			//"春"と表示する
			cout << "春\n";
			break;
		//5の場合：春
		case 5 :
			//"春"と表示する
			cout << "春\n";
			break;
		//6の場合：夏
		case 6 :
			//"夏"と表示する
			cout << "夏\n";
			break;
		//7の場合：夏
		case 7 :
			//"夏"と表示する
			cout << "夏\n";
			break;
		//8の場合：夏
		case 8 :
			//"夏"と表示する
			cout << "夏\n";
			break;
		//9の場合：秋
		case 9 :
			//"秋"と表示する
			cout << "秋\n";
			break;
		//10の場合：秋
		case 10 :
			//"秋"と表示する
			cout << "秋\n";
			break;
		//11の場合：秋
		case 11 :
			//"秋"と表示する
			cout << "秋\n";
			break;
		//12の場合：冬
		case 12 :
			//"冬"と表示する
			cout << "冬\n";
			break;
		//通らないパスだが可読性を考慮し記載
		default:
			//処理無し
			break;
	}
	return 0;
}
