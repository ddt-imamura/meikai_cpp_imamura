/*
 * 関数名: main
 * 説明	: 新版明解C++	演習問題2-15
 * 		  おみくじを行う。乱数生成を行い、「大吉」「中吉」「小吉」「吉」「末吉」「凶」「大凶」のいずれかをランダムに表示する。
 * 		  ただし、switch文にて記述すること。
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
	//生成した乱数の格納変数
	int randomNumber;
	//乱数の種を生成
	srand(time(NULL));
	//生成した乱数から0～6のいずれかの値を取得する
	randomNumber = rand() % 6;

	//表示内容を説明する
	cout << "おみくじの結果：";
	//生成した乱数の値で場合分けを行う
	switch ( randomNumber ){
		//大吉：乱数が0の場合
		case 0 :
			//"大吉"と表示する
			cout << "大吉\n";
			break;
		//中吉：乱数が1の場合
		case 1 :
			//"中吉"と表示する
			cout << "中吉\n";
			break;
		//小吉：乱数が2の場合
		case 2 :
			//"小吉"と表示する
			cout << "小吉\n";
			break;
		//吉：乱数が3の場合
		case 3 :
			//"吉"と表示する
			cout << "吉\n";
			break;
		//末吉：乱数が4の場合
		case 4 :
			//"末吉"と表示する
			cout << "末吉\n";
			break;
		//凶：乱数が5の場合
		case 5 :
			//"凶"と表示する
			cout << "凶\n";
			break;
		//大凶：乱数が6の場合
		case 6 :
			//"大凶"と表示する
			cout << "大凶\n";
			break;
		//通らないパスだが可読性を考慮し記載
		default:
			//処理無し
			break;
	}
	return 0;
}
