/*
 * 関数名: main
 * 説明	: 新版明解C++	演習問題2-4
 * 		  正の整数値を読み込んで、それが5で割り切れれば「その値は5で割り切れます」と表示し、
 * 		  そうでなければ「その値は5で割り切れません」と表示する。
 * 		  ただし、正でない値を読み込んだ場合は「正でない値が入力されました」と表示する。
 * パラメータ:なし
 * 返り値:  0固定
 * 作成者: T.Imamura
 * 作成日: 2022.06.20
 * 備考:
 */

#include <iostream>

using namespace std;

int main() {

	int inputNumber;		//入力整数値を格納する変数
	int remainderNumber;	//剰余算の結果の格納変数

	//整数値の入力を促す
	cout << "正の整数値:";
	//整数値を入力する
	cin >> inputNumber;
	//正の値でない場合
	if( inputNumber < 0 ){
		//指定メッセージを表示し、終了する
		cout << "正でない値が入力されました。\n";
		return 0;
	}
	//入力値に対し5で剰余算を行う
	remainderNumber = inputNumber % 5;
	//5で割り切れる場合
	if( remainderNumber == 0 ){
		//指定の表示を行う
		cout << "その値は5で割り切れます。\n";
	//5で割り切れない場合
	} else {
		//指定の表示を行う
		cout << "その値は5で割り切れません。\n";
	}
	return 0;
}
