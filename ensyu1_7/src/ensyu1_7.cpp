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
	int z;	//zはint型の変数

	x = 63;
	y = 18;
	z = 15;

	cout << "xの値は" << x << "です。\n";	//xの値を表示
	cout << "yの値は" << y << "です。\n";	//yの値を表示
	cout << "zの値は" << z << "です。\n";	//zの値を表示
	cout << "合計の値は" << x + y + z << "です。\n";	//xとyとzの合計を表示
	cout << "平均の値は" << (x + y + z) / 3 << "です。\n";	//xとyのとz平均を表示
	return 0;
}
