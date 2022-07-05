/*
 * 関数名: main
 * 説明	: 新版明解C++　演習問題3-26
 * 		  じゃんけんプログラムを作成する。
 * 		  ただし、以下のように複数のプログラムを作成すること。
 * 		  ・人間が望むだけ繰り返せる
 * 		  ・どちらかが3回勝つまで続ける
 * 		  など
 * パラメータ:なし
 * 返り値:  0固定
 * 作成者: T.Imamura
 * 作成日: 2022.07.05
 * 備考:
 */
#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

#define PLAYER_WIN 		0	//じゃんけん結果：プレイヤーの勝利
#define COMPUTER_WIN 	1	//じゃんけん結果：コンピューターの勝利
#define DRAW 			2	//じゃんけん結果：あいこ

//じゃんけんの実行関数
int gameFunc(void);

int main() {

	int gameType;			//じゃんけんゲームの選択番号
	int endGameFlag = 0;		//繰り返しじゃんけんの終了フラグ
	int winCounterPlayer = 0;		//プレイや―側の勝利回数
	int winCounterComputer = 0;		//コンピュータ側の勝利回数
	int winResult;					//じゃんけんの結果

	//ゲーム開始を通知
	cout << "じゃんけんゲームを開始します。種類を選択してください。\n";
	//番号を表示
	cout <<	"0：好きなだけ繰り返し　1:3回先勝\n";
	//入力を促す
	cout << "あなたの選択：";
	//入力値を格納
	cin >>  gameType;

	switch (gameType) {
		//好きなだけ繰り返しタイプ
		case 0:
			//ゲームの内容通知
			cout << "あなたとコンピューターで繰り返しじゃんけんを行います。\n";
			//繰り返し終了のフラグが立っていなければ続行
			while( endGameFlag != 1 ){
				//じゃんけんの実行関数を呼ぶ
				gameFunc();
				//続行or終了を確認
				cout << "じゃんけんを続けますか？ はい:1以外 　いいえ:1\n";
				//入力を促す
				cout << "あなたの選択：";
				//フラグに値を格納
				cin >> endGameFlag;
			};
			//ゲーム終了を通知
			cout << "繰り返しじゃんけんを終了します。\n";

			break;
		//3回先勝タイプ
		case 1:
			//ゲームの内容を通知
			cout << "あなたとコンピューターでじゃんけんを行い、3回先に勝ったほうが勝者です。\n";
			//どちらも2回以下の勝利回数なら続行
			while ((winCounterPlayer <= 2) && (winCounterComputer <= 2)) {
				//じゃんけんの実行関数を呼ぶ
				winResult = gameFunc();
				//プレイヤーの勝利だった場合
				if ( winResult == PLAYER_WIN ) {
					//プレイヤーの勝利回数を加算
					winCounterPlayer++;
					//累計勝利回数を通知
					cout << "あなたの勝利回数:" << winCounterPlayer << "回\n";
					//コンピュータの勝利だった場合
				} else if (winResult == COMPUTER_WIN) {
					//コンピューターの勝利回数を加算
					winCounterComputer++;
					//累計勝利回数を通知
					cout << "コンピューターの勝利回数:" << winCounterComputer << "回\n";
				}
			}
			//終了判定
			if (winCounterPlayer >= 2) {
				//プレイヤー勝利時の通知
				cout << "プレイヤーが3回勝利したため終了します。\n";
			} else {
				//コンピュータ勝利時の通知
				cout << "コンピューターが3回勝利したため終了します。\n";
			}

			break;
		//不正な種類入力の場合
		default:
			//不正を通知する
			cout << "入力値が不正です。\n";

			break;
	}

	return 0;
}

/*
 * 関数名: gameFunc
 * 説明	: 新版明解C++　演習問題3-26
 * 		  じゃんけんの実行関数。乱数を使用してじゃんけんを1回実行する。
 * パラメータ:なし
 * 返り値:  winResult		0:プレイヤーの勝ち　1:相手（コンピューター）の勝ち  2:あいこ
 * 作成者: T.Imamura
 * 作成日: 2022.07.05
 * 備考:
 */
int gameFunc(void)
{
	//入力されたじゃんけんの手
	int inputNumber;
	//生成した乱数(0,1,2)の格納変数
	int randomNumber;
	//じゃんけんの結果
	int winResult = DRAW;

	//乱数の種を生成
	srand(time(NULL));
	//生成した乱数から0,1,2のいずれかの値を取得する
	randomNumber = rand() % 3;

	//開始の合図
	cout << "あなたの手を決めてください。\n";

	do {
		//選択肢を表示
		cout << "0:グー　1:チョキ　2:パー\n";
		//入力を促す
		cout << "あなたの手は：";
		//入力値を格納
		cin >> inputNumber;
	//不正値の場合はやり直し
	} while ( 0 > inputNumber || 2 < inputNumber  );

	//相手（コンピューター）の手を表示
	cout << "相手の手は：";

	//コンピュータ―の手との組み合わせで結果を設定する
	switch ( randomNumber ){
		//コンピューターがグーの場合
		case 0 :
			//手の表示を行う
			cout << "グー\n";
			//プレイヤーがチョキのとき
			if (inputNumber == 1) {
				//じゃんけん結果を設定
				winResult = COMPUTER_WIN;
			//プレイヤーがパーのとき
			} else if (inputNumber == 2) {
				//じゃんけん結果を設定
				winResult = PLAYER_WIN;
			}
			//あいこの場合は処理なし
			break;
		//コンピューターがチョキの場合
		case 1 :
			//手の表示を行う
			cout << "チョキ\n";
			//プレイヤーがグーのとき
			if (inputNumber == 0) {
				//じゃんけん結果を設定
				winResult = PLAYER_WIN;
			//プレイヤーがパーのとき
			} else if (inputNumber == 2) {
				//じゃんけん結果を設定
				winResult = COMPUTER_WIN;
			}
			//あいこの場合は処理なし
			break;
			//コンピューターがパーの場合
		case 2 :
			//手の表示を行う
			cout << "パー\n";
			//プレイヤーがグーのとき
			if (inputNumber == 0) {
				//じゃんけん結果を設定
				winResult = COMPUTER_WIN;
			//プレイヤーがチョキのとき
			} else if (inputNumber == 1) {
				//じゃんけん結果を設定
				winResult = PLAYER_WIN;
			}
			//あいこの場合は処理なし
			break;
		//通らないパス
		default:
			//処理無し
			break;
	}
	//勝敗を表示
	//あいこの場合
	if (winResult == DRAW) {
		cout << "結果は あいこ です。\n";
	//プレイヤーが勝利した場合
	} else if (winResult == PLAYER_WIN) {
		cout << "結果は あなたの勝ち です。\n"	;
	//コンピューターが勝利した場合
	} else {
		cout << "結果は あなたの負け です。\n";
	}

	return winResult;
}

