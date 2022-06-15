//============================================================================
// Name        : ensyu1_4.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include	<iostream>

using namespace std;

int main() {
	int x;	//xはint型の変数
	int y;	//yはint型の変数

	x = 63.5;
	y = 18.5;

	cout << "xの値は" << x << "です。\n";				//xの値を表示
	cout << "yの値は" << y << "です。\n";				//yの値を表示
	cout << "合計の値は" << x + y << "です。\n";		//xとyの合計を表示
	cout << "平均の値は" << (x + y) / 2 << "です。\n";	//xとyの平均を表示
	return 0;
}
