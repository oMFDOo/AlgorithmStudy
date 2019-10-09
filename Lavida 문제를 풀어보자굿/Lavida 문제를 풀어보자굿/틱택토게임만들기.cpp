#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <string>
#include <array>
using namespace std;

array <char, 10> square = { 'o','1','2','3','4','5','6','7','8','9' };

//print
void printBoard();
void printExplain();
void printMain();

int selectMode();
void printTurn(int, char);
void select();


int main() {
	bool startGame = true, gameMode = true;
	while (startGame) {
		//printMain();
		// array<int, 5> test;
		int mode;
		mode = selectMode();

		if (mode == 1)
			printExplain();

		if (mode == 2)
			cout << "아직 구현 안 했어염 ><\n";

		else if (mode == 3)
			while (true) {
				printBoard();
				cout << endl;
				printTurn(1, 79);
				printTurn(2, 88);
			}
	}
}

void printMain() 
{
	system("cls");
	cout << " 어떻게든 꾸며라 미래의 나녀석\n";
	
	cout << "\r\t1. 게임설명 \t 2. 1인용 \t 3. 2인용";
	Sleep(800);
	cout << "\r";
	Sleep(800);
}

void select() 
{
	string place;
	cin >> place;


}

void printTurn(int turn, char simbol) 
{
	cout << "\r";
	cout << "\tPlayer" << turn << " (" << simbol << ")의 차례입니다.";
}


// mode select
int selectMode() 
{
	while (true) {

		string inputMode;
		cin >> inputMode;

		int mode;
		mode = atoi(inputMode.c_str());

		if (mode == 1)
			return mode;
		else if (mode == 2)
			return mode;
		else if (mode == 3)
			return mode;
		else
			cout << "올바른 값을 입력해주세요.";
	}
}

// explanation
void printExplain() 
{
	system("cls");
	cout << "\n\t\t<< tic tac toe 게임설명 >>\n\n";
	cout << "    1. Player1과 Player2는 번갈아가며 말을 둡니다.\n";
	cout << "    2. Player1은 'O', Player2는 'X'로 표시됩니다.\n";
	cout << "    3. 두 사람 중 가로, 세로, 대각선 중 하나라도 3개가 연결되면 이깁니다.\n";
	cout << "    4. 두 사람 모두 연결에 실패하면 비깁니다.\n";
}

// draw game board
void printBoard()
{
	system("cls");
	cout << "\n\t★☆★☆★☆★☆★☆★\n";
	cout << "\t======================";
	cout << "\n\t  << Tic Tac Toe >>\n";
	cout << "\t======================\n";
	cout << "\t☆★☆★☆★☆★☆★☆\n\n";

	cout << "    Player 1 (O)  -  Player 2 (X)" << endl << endl;
	cout << endl;
	cout << "  ■■■■■■■■■■■■■■■■" << endl;
	cout << "  ■\t\t\t\t■" << endl;
	cout << "  ■\t\t\t\t■" << endl;
	cout << "  ■\t     |     |     \t■" << endl;
	cout << "  ■\t  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << "\t\t■" << endl;

	cout << "  ■\t_____|_____|_____\t■" << endl;
	cout << "  ■\t     |     |     \t■" << endl;

	cout << "  ■\t  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << "\t\t■" << endl;

	cout << "  ■\t_____|_____|_____\t■" << endl;
	cout << "  ■\t     |     |     \t■" << endl;

	cout << "  ■\t  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << "\t\t■" << endl;

	cout << "  ■\t     |     |     \t■" << endl;
	cout << "  ■\t\t\t\t■" << endl;
	cout << "  ■\t\t\t\t■" << endl;
	cout << "  ■■■■■■■■■■■■■■■■" << endl << endl;
}
