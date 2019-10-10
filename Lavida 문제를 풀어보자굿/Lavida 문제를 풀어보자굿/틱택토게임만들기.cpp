#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <string>
#include <array>
using namespace std;

array <char, 50> square = { 'o','1','2','3','4','5','6','7','8','9' };

//print
void printBoard();
void printExplain();
void printMain();
void changeColor(int);
void resetColor();

int selectMode();
void printTurn(int, char);
void selectPlayer1();
void selectPlayer2();

bool draw();
bool checkWinO();
bool checkWinX();

int main() {
	
	bool startGame = true;
	while (startGame) {
		bool  gameMode = true;
		square = { 'o','1','2','3','4','5','6','7','8','9' };
		int mode, turnCount = 0;
		mode = selectMode();

		if (mode == 1)
			printExplain();

		if (mode == 2)
			cout << "아직 구현 안 했쪄염 뿌우~ ><\n";

		else if (mode == 3)
			while (gameMode) {
				
				printBoard();
				cout << endl;
				printTurn(1, 79);
				selectPlayer1();
				if (checkWinO()) {
					system("cls");
					cout << "오가 이겼어염^^\n";
					break;
				}
				turnCount++;
				if (turnCount > 8) {
					gameMode = false;
					startGame = draw();
					if (!gameMode) {
						break;
					}
					printBoard();
				}
				printBoard();
				printTurn(2, 88);
				selectPlayer2();
				if (checkWinX()) {
					system("cls");
					cout << "엑스가 이겼어염^^\n";
					break;
				}
				turnCount++;
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

bool draw() {
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << endl << endl;
	cout << "_______________________________________________________________________________________________" << endl;
	cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl << endl;
	cout << " '      '             '                   '            '                      '         '" << endl;
	cout << R"(            __________        ____________        ___________  '    ___  ___  ___)" << endl;
	cout << R"(           /   _____  \  '   /  ________  \      /  ______   |     /  / /  / /  /)" << endl;
	cout << R"(          /   /     \  \    /  /        |  |    /  /      |  |  ' /  / /  / /  /)" << endl;
	cout << R"(    '    /   /      |  |   /  /_______ /  /    /  /_______|  |   /  / /  / /  /)" << endl;
	cout << R"(        /   /      |  |   /  ________    /  ' /  _________/  |  /  / /  / /  /)" << endl;
	cout << R"(       /   /   '  /  /   /  /        \  \    /  /        /  /  /  /_/  /_/  /)" << endl;
	cout << R"(  '   /   /______/  /   /  /         |  |   /  /        /  /  |           /)" << endl;
	cout << R"(      |____________/   /__/          |__|  /__/   '    /__/    \____/\____/)" << endl;
	cout << "        '             '          '                            '                 '   " << endl;
	cout << " '      '             '                   '            '                      '         '" << endl << endl;
	cout << "_______________________________________________________________________________________________" << endl;
	cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
	while (true) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
		cout << "    \t\t1. 다시하기 \t 2.그만두기\n\n";
		string inputRestart;
		resetColor();
		cin >> inputRestart;
		int restart = atoi(inputRestart.c_str());
		if (restart == 1) {
			printBoard();
			return true;
		}
		else if (restart == 2) {
			return false;
		}
		else {
			cout << "올바른 번호를 입력해주세요. \n\n";
		}
	}
	
	resetColor();
}

void selectPlayer1()
{
	while (true) {
		string inputPlace;
		cin >> inputPlace;
		int place = atoi(inputPlace.c_str());

		if (place > 9) {
			cout << "\r올바른 위치를 선택해주세요.\n\n";
		}
		else if (square[place] == 'O' || square[place] == 'X') {
			cout << "\r이미 선택된 자리 입니다.\n";
		}
		else if (place == 0) {
			cout << "\r올바른 위치를 선택해주세요.\n";
		}
		else {
			square[place] = 'O';
			return;
		}
	}
}

bool checkWinO() {
	if (square[1] == 'O' && square[2] == 'O' && square[3] == 'O') {			// low
		return true;
	}
	else if (square[4] == 'O' && square[5] == 'O' && square[6] == 'O') {
		return true;
	}
	else if (square[7] == 'O' && square[8] == 'O' && square[9] == 'O') {
		return true;
	}
	else if (square[1] == 'O' && square[4] == 'O' && square[7] == 'O') {	// col
		return true;
	}
	else if (square[2] == 'O' && square[5] == 'O' && square[8] == 'O') {
		return true;
	}
	else if (square[3] == 'O' && square[6] == 'O' && square[9] == 'O') {
		return true;
	}
	else if (square[1] == 'O' && square[5] == 'O' && square[9] == 'O') {	// cross
		return true;
	}
	else if (square[3] == 'O' && square[5] == 'O' && square[7] == 'O') {
		return true;
	}
	return false;
}

bool checkWinX() {
	if (square[1] == 'X' && square[2] == 'X' && square[3] == 'X') {			// lXw
		return true;
	}
	else if (square[4] == 'X' && square[5] == 'X' && square[6] == 'X') {
		return true;
	}
	else if (square[7] == 'X' && square[8] == 'X' && square[9] == 'X') {
		return true;
	}
	else if (square[1] == 'X' && square[4] == 'X' && square[7] == 'X') {	// cXl
		return true;
	}
	else if (square[2] == 'X' && square[5] == 'X' && square[8] == 'X') {
		return true;
	}
	else if (square[3] == 'X' && square[6] == 'X' && square[9] == 'X') {
		return true;
	}
	else if (square[1] == 'X' && square[5] == 'X' && square[9] == 'X') {	// crXss
		return true;
	}
	else if (square[3] == 'X' && square[5] == 'X' && square[7] == 'X') {
		return true;
	}
	return false;
}

void selectPlayer2()
{
	while (true) {
		string inputPlace;
		cin >> inputPlace;
		int place = atoi(inputPlace.c_str());
		if (place > 9) {
			cout << "\r올바른 위치를 선택해주세요.\n\n";
		}
		else if (square[place] == 'O' || square[place] == 'X') {
			cout << "\r이미 선택된 자리 입니다.\n";
		}
		else if (place == 0) {
			cout << "\r올바른 위치를 선택해주세요.\n\n";
		}
		else {
			square[place] = 'X';
			return;
		}
	}
}


void printTurn(int turn, char simbol)
{
	if (turn == 1) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
	}
	else if (turn == 2){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	}
	cout << "\tPlayer" << turn;
	resetColor();
	cout << " (" << simbol << ")의 차례입니다.\n";
	cout << "    원하는 위치를 입력해주세요 >> ";
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
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 014);
	cout << "\n\t\t<< tic tac toe 게임설명 >>\n\n";
	resetColor();
	cout << "    > Player1과 Player2는 번갈아가며 말을 둡니다.\n";
	cout << "    > Player1은 'O', Player2는 'X'로 표시됩니다.\n";
	cout << "    > 두 사람 중 가로, 세로, 대각선 중 하나라도 3개가 연결되면 이깁니다.\n";
	cout << "    > 두 사람 모두 연결에 실패하면 비깁니다.\n\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
	cout << "    \t2. 혼자하기 \t 3. 두 명에서 하기\n\n";
	resetColor();
}

// draw game board
void printBoard()
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cout << "\t======================";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
	cout << "\n\t  << Tic Tac Toe >>\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cout << "\t======================\n\n";

	resetColor();
	cout << "    Player 1 (O)  -  Player 2 (X)" << endl << endl;
	cout << endl;
	cout << "  ■■■■■■■■■■■■■■■■" << endl;
	cout << "  ■\t\t\t\t■" << endl;
	cout << "  ■\t\t\t\t■" << endl;
	cout << "  ■\t     |     |     \t■" << endl;

	cout << "  ■\t  ";
	changeColor(1);
	cout << square[1];
	resetColor();
	cout << "  |  ";
	changeColor(2);
	cout << square[2];
	resetColor();
	cout << "  |  ";
	changeColor(3);
	cout << square[3];
	resetColor();
	cout << "\t\t■" << endl;

	cout << "  ■\t_____|_____|_____\t■" << endl;
	cout << "  ■\t     |     |     \t■" << endl;

	cout << "  ■\t  ";
	changeColor(4);
	cout << square[4];
	resetColor();
	cout << "  |  ";
	changeColor(5);
	cout << square[5];
	resetColor();
	cout << "  |  ";
	changeColor(6);
	cout << square[6];
	resetColor();
	cout << "\t\t■" << endl;

	cout << "  ■\t_____|_____|_____\t■" << endl;
	cout << "  ■\t     |     |     \t■" << endl;

	cout << "  ■\t  ";
	changeColor(7);
	cout << square[7];
	resetColor();
	cout << "  |  ";
	changeColor(8);
	cout << square[8];
	resetColor();
	cout << "  |  ";
	changeColor(9);
	cout << square[9];
	resetColor();
	cout << "\t\t■" << endl;

	cout << "  ■\t     |     |     \t■" << endl;
	cout << "  ■\t\t\t\t■" << endl;
	cout << "  ■\t\t\t\t■" << endl;
	cout << "  ■■■■■■■■■■■■■■■■" << endl << endl;
}

void changeColor(int color) {
	if (square[color] == 'O') {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
	}
	else if (square[color] == 'X') {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	}
	else {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	}
}

void resetColor() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}