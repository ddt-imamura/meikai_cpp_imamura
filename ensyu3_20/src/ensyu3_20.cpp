/*
 * 関数名: main
 * 説明	: 新版明解C++ 演習問題3-20
 * 		 *により、直角が左上、右上、右下にある直角三角形をそれぞれ表示する。
 * パラメータ:なし
 * 返り値:  0固定
 * 作成者: T.Imamura
 * 作成日: 2022.06.29
 * 備考:
 */
#include	<string>
#include	<iostream>

using namespace std;

int  inputStepNumber(string angleDirection);	//三角形の段数を入力させる
void makeTriangleLeftUp(int stepLeftup);		//左上が直角の三角形を表示
void makeTriangleRightUp(int stepRightup);		//右上が直角の三角形を表示
void makeTriangleRightDown(int stepRightdown);	//右下が直角の三角形を表示


int main() {

	int stepLeftUp;		//左上直角三角形の段数
	int stepRightUp;	//右上直角三角形の段数
	int stepRightDown;	//右下直角三角形の段数

	//左上直角三角形の段数を決定
	stepLeftUp = inputStepNumber("左上");
	//左上直角三角形を表示
	makeTriangleLeftUp(stepLeftUp);

	//右上直角三角形の段数を決定
	stepRightUp = inputStepNumber("右上");
	//右上直角三角形を表示
	makeTriangleRightUp(stepRightUp);

	//右下直角三角形の段数を決定
	stepRightDown = inputStepNumber("右下");
	//右下直角三角形を表示
	makeTriangleRightDown(stepRightDown);

	return 0;
}

/*
 * 関数名: inputStepNumber
 * 説明	: 直角三角形の段数を決定する。
 * パラメータ:string angleDirection	直角の向き
 * 返り値:  stepNumber	直角三角形の段数
 * 作成者: T.Imamura
 * 作成日: 2022.06.29
 * 備考:
 */
int inputStepNumber(string angleDirection)
{
	int stepNumber;	//段数

	cout << angleDirection << "直角三角形を表示します。\n";	//表示内容を通知
	do {
		cout << "2以上の段数を指定してください。\n";
		cout << "段数は：";					//入力を促す
		cin	 >> stepNumber;					//入力値を格納
	}while (stepNumber < 2);				//三角形を形成できる段数であることが条件

	return stepNumber;
}

/*
 * 関数名: makeTriangleLeftUp
 * 説明	: 左上直角三角形を表示する。
 * パラメータ: int stepNumber 	段数
 * 返り値: なし
 * 作成者: T.Imamura
 * 作成日: 2022.06.29
 * 備考:
 */
void makeTriangleLeftUp(int stepNumber)
{
	//1段当たりの*の数を指定
	for ( int i = stepNumber; i > 0; i-- ) {
		//*をループ文で表示
		for ( int j = 1; j <= i; j++ ) {
			//*を表示
			cout << '*';
		}
		//次の行に移る
		cout << '\n';
	}
	return;
}

/*
 * 関数名: makeTriangleRightUp
 * 説明	: 右上直角三角形を表示する。
 * パラメータ: int stepNumber 	段数
 * 返り値: なし
 * 作成者: T.Imamura
 * 作成日: 2022.06.29
 * 備考:
 */
void makeTriangleRightUp(int stepNumber)
{
	//現段数を指定
	for ( int i = 1; i <= stepNumber; i++ ) {
		//空白文字の数は 現段数-1 と同じ
		for ( int j = 1; j < i; j++ ) {
			//空白文字で*の前を埋める
			cout << ' ';
		}
		//指定段数 - 空白文字数 = *の数
		for ( int k = 0; k <= stepNumber - i; k++ ) {
			//空白文字の後ろに*を表示
			cout << '*';
		}
		//次の段に移る
		cout << '\n';
	}
	return;
}

/*
 * 関数名: makeTriangleRightDown
 * 説明	: 右下直角三角形を表示する。
 * パラメータ: int stepNumber 	段数
 * 返り値: なし
 * 作成者: T.Imamura
 * 作成日: 2022.06.29
 * 備考:
 */
void makeTriangleRightDown(int stepNumber)
{
	//現段数を指定
	for ( int i = 1; i <= stepNumber; i++ ) {
		//空白文字の数は 指定段数-現段数 と同じ
		for ( int j = stepNumber - i; j > 0; j-- ) {
			//空白文字で*の前を埋める
			cout << ' ';
		}
		//指定段数 - 空白文字数 = *の数
		for ( int k = 1; k <= i; k++ ) {
			//空白文字の後ろに*を表示
			cout << '*';
		}
		//次の段に移る
		cout << '\n';
	}
	return;
}
