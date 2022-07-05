/*
 * 関数名: main
 * 説明	: 新版明解C++　演習問題2-14
 * 		  0,1,2のいずれかの値の乱数を生成し、0であれば「グー」、1であれば「チョキ」、2であれば「パー」を表示する。
 * 		  ただし、switch文を用いて記述する。
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
	//生成した乱数(0,1,2)の格納変数
	int randomNumber;
	//乱数の種を生成
	srand(time(NULL));
	//生成した乱数から0,1,2のいずれかの値を取得する
	randomNumber = rand() % 3;

	//生成した乱数の値で場合分けを行う
	switch ( randomNumber ){
		//グーの場合
		case 0 :
			//指定された表示を行う
			cout << "グー\n";
			break;
		//チョキの場合
		case 1 :
			//指定された表示を行う
			cout << "チョキ\n";
			break;
		//パーの場合
		case 2 :
			//指定された表示を行う
			cout << "パー\n";
			break;
		//通らないパスだが可読性のため記載
		default:
			//処理無し
			break;
	}
	return 0;
}
