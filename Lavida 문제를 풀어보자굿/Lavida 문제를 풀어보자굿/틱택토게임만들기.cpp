#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <string>
#include <array>
#include <random>
#include <ctime>
using namespace std;

array <char, 50> square = { 'o','1','2','3','4','5','6','7','8','9' };

array <int, 8> front = { 1,4,7,1,2,3,1,3 };
array <int, 8> middle = { 2,5,8,4,5,6,5,5 };
array <int, 8> endNum = { 3,6,9,7,8,9,9,7 };

string winner[] = {" ","\tPLAYER_1", "\tPLAYER_2", "\tCOMPUTER"};

//print
void printBoard();
void printExplain();
void printMain();
void changeColor(int);
void resetColor();

int selectMode();
void printTurn(int, char);
void selectPlayer(int);

bool drawDraw();
bool drawWin(int);
bool checkWin();

void computerChoiceBeginner();
void computerChoiceIntermediate();
int choiceDifferenty();

int main() {
	
	bool startGame = true;
	printMain();
	while (startGame) {
		square = { 'o','1','2','3','4','5','6','7','8','9' };
		bool  gameMode = true;
		int mode, turnCount = 0;
		mode = selectMode();

		if (mode == 1) {
			printExplain();
		}

		if (mode == 2) {
			int difficulty = choiceDifferenty();
			while (gameMode) {

				printBoard();
				cout << endl;
				printTurn(1, 79);
				selectPlayer(turnCount);
				if (checkWin()) {
					startGame = drawWin(1);
					printMain();
					break;
				}
				turnCount++;
				if (turnCount > 8) {
					gameMode = false;
					startGame = drawDraw();
					if (!gameMode) {
						printMain();
						break;
					}
				}
				printBoard();
				printTurn(3, 88);
				if (difficulty == 2) {
					computerChoiceIntermediate();
				}
				else if (difficulty == 1) {
					computerChoiceBeginner();
				}
				if (checkWin()) {
					startGame = drawWin(3);
					printMain();
					break;
				}
				turnCount++;
			}
		}

		else if (mode == 3) {
			while (gameMode) {

				printBoard();
				cout << endl;
				printTurn(1, 79);
				selectPlayer(turnCount);
				if (checkWin()) {
					startGame = drawWin(1);
					printMain();
					break;
				}
				turnCount++;
				if (turnCount > 8) {
					gameMode = false;
					startGame = drawDraw();
					if (!gameMode) {
						printMain();
						break;
					}
				}
				printBoard();
				printTurn(2, 88);
				selectPlayer(turnCount);
				if (checkWin()) {
					startGame = drawWin(2);
					break;
				}
				turnCount++;
			}
		}
	}
}
void printMain()
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
	cout << endl << endl;
	cout << "_______________________________________________________________________________________________" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
	cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << " '      '             '          *         '            '                      *         '" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "\t" << R"(	  ______________     ______________        ______________)" << endl;
	cout << "\t" << R"(	 /             /    /             /       /             /)" << endl;
	cout << "\t" << R"(	/____     ____/    /____     ____/       /____     ____/)" << endl;
	cout << "\t" << R"(            /    /             /    /	             /    /)" << endl;
	cout << "\t" << R"(           /    /   /         /    /                /    /)" << endl;
	cout << "\t" << R"(          /    /      ___    /    /   ___    ___   /    /  __    ___)" << endl;
	cout << "\t" << R"(         /    /   /  /      /    /   /   \  /     /    /  /  \  /___\)" << endl;
	cout << "\t" << R"(        /____/   /   \___  /____/    \__/ \ \___ /____/   \__/  \___)" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "        '             '          *                            '                 '   " << endl;
	cout << " '            *                            '            '             *         '         '" << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
	cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
	cout << "_______________________________________________________________________________________________" << endl;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cout << "\t\t1. 게임설명 \t2. 혼자 하기 \t3. 두 명에서 하기\n\n";
	cout << "\t\t\t원하는 모드의 번호를 입력해주세요 >> ";

	resetColor();

}

bool drawWin(int winNumber) 
{

	int print;
	if (winNumber==1) {
		print = 1;
	}
	else {
		print = 4;
	}

	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
	cout << endl << endl;
	cout << "_______________________________________________________________________________________________" << endl;
	cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl << endl;
	cout << " '      '             '          *         '            '                      *         '" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), print);
	cout << "\t\t" << winner[winNumber] << endl;
	cout << "\t\t" << R"(   *  ___  ___  ___  _________   _____       ___    '             ')" << endl;
	cout << "\t\t" << R"(     /  / /  / /  / /__   ___/  /     | '   /  /        ')" << endl;
	cout << "\t\t" << R"(  ' /  / /  / /  /    /  /     /  /|  |    /  /                         ')" << endl;
	cout << "\t\t" << R"(   /  / /  / /  /    /  /  '  /  / |  |   /  /   '           ')" << endl;
	cout << "\t\t" << R"(  /  / /  / /  /    /  /     /  /  |  |  /  /      *      ')" << endl;
	cout << "\t\t" << R"( /  /_/  /_/  / *  /  /     /  /   |  | /  /                   )" << endl;
	cout << "\t\t" << R"( |           /  __/  /___  /  /    |  |/  /    ')" << endl;
	cout << "\t\t" << R"( \____/\____/  /________/ /__/     |_____/       *           ')" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
	cout << "        '             '          *                            '                 '   " << endl;
	cout << " '            *                            '            '             *         '         '" << endl << endl;
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

bool drawDraw() 
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
	cout << endl << endl;
	cout << "___________________________________________________________________________________________" << endl;
	cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl << endl;
	cout << " '      *             '                   '            *                      *         '" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
	cout << R"(            __________        ____________        ___________  '    ___  ___  ___)" << endl;
	cout << R"(           /   _____  \  *   /  ________  \      /  ______   |     /  / /  / /  /)" << endl;
	cout << R"(          /   /     \  \    /  /        |  |    /  /      |  |  ' /  / /  / /  /)" << endl;
	cout << R"(    '    /   /      |  |   /  /_______ /  /    /  /_______|  |   /  / /  / /  /)" << endl;
	cout << R"(        /   /      |  |   /  ________    /  ' /  _________/  |  /  / /  / /  /)" << endl;
	cout << R"(       /   /   '  /  /   /  /        \  \    /  /        /  /  /  /_/  /_/  /)" << endl;
	cout << R"(  '   /   /______/  /   /  /         |  |   /  /        /  /   |           /)" << endl;
	cout << R"(      |____________/   /__/          |__|  /__/   '    /__/ *  \____/\____/)" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
	cout << "        '                       '                            '                 '   " << endl;
	cout << " '      '        *                  '       *     '                      '         '" << endl << endl;
	cout << "___________________________________________________________________________________________" << endl;
	cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;

	while (true) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
		cout << "    \t\t1. 다시하기 \t 2.그만두기\n\n";
		string inputRestart;
		resetColor();
		cin >> inputRestart;
		int restart = atoi(inputRestart.c_str());
		if (restart == 1) {
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

int choiceDifferenty() 
{
	cout << "\n\t\t\t\t난이도를 입력해주세요.\n\n";
	cout << "\t\t\t    1. 초급\t 2. 중급\n\t\t\t>>";
	while (true) {
		string inputDifferenty;
		cin >> inputDifferenty;

		int differenty;
		differenty = atoi(inputDifferenty.c_str());

		if (differenty == 1)
			return differenty;
		else if (differenty == 2)
			return differenty;
		else {
			cout << "\n\t\t\t\t올바른 값을 입력해주세요.";
		}
	}
}

void computerChoiceBeginner() 
{
	srand((unsigned int)time(NULL));
	while (true) {
		int num = rand() % 9 + 1;
		bool flag = true;
		if (square[num] == 'O' || square[num] == 'X') {
			flag = false;
		}
		if (flag) {
			square[num] = 'X';
			return;
		}
	}
}

void computerChoiceIntermediate() 
{
	for (int i = 0; i < 8; i++) {
		char frontToChar = front[i] + 48, middleToChar = middle[i] + 48, endToChar = endNum[i] + 48;

		if (square[front[i]] == 'X' && square[middle[i]] == 'X' && square[endNum[i]] == endToChar) {
			square[endNum[i]] = 'X';
			return;
		}
		else if (square[front[i]] == 'X' && square[endNum[i]] == 'X'&& square[middle[i]] == middleToChar) {
			square[middle[i]] = 'X';
			return;
		}
		else if (square[middle[i]] == 'X' && square[endNum[i]] == 'X' && square[front[i]] == frontToChar) {
			square[front[i]] = 'X';
			return;
		}
	}
	for (int i = 0; i < 8; i++) {
		char frontToChar = front[i] + 48, middleToChar = middle[i] + 48, endToChar = endNum[i] + 48;

		if (square[front[i]] == 'O' && square[middle[i]] == 'O' && square[endNum[i]] == endToChar) {
			square[endNum[i]] = 'X';
			return;
		}
		else if (square[front[i]] == 'O' && square[endNum[i]] == 'O'&& square[middle[i]] == middleToChar) {
			square[middle[i]] = 'X';
			return;
		}
		else if (square[middle[i]] == 'O' && square[endNum[i]] == 'O' && square[front[i]] == frontToChar) {
			square[front[i]] = 'X';
			return;
		}
	}
	srand((unsigned int)time(NULL));
	while (true) {
		int num = rand() % 9 + 1;
		bool flag = true;
		if (square[num] == 'O' || square[num] == 'X') {
			flag = false;
		}
		if (flag) {
			square[num] = 'X';
			return;
		}
	}
}

void selectPlayer(int turn)
{
	while (true) {
		string inputPlace;
		cin >> inputPlace;
		int place = atoi(inputPlace.c_str());

		if (place > 9 || place == 0) {
			cout << "\r올바른 위치를 선택해주세요.\n\n";
		}
		else if (square[place] == 'O' || square[place] == 'X') {
			cout << "\r이미 선택된 자리 입니다.\n";
		}
		else {
			if (turn % 2) {
				square[place] = 'X';
				return;
			}
			else {
				square[place] = 'O';
				return;
			}
		}
	}
}

bool checkWin() 
{
	for (int i = 0; i < sizeof(front) / sizeof(int); i++) {
		if (square[front[i]] == square[middle[i]] && square[middle[i]] == square[endNum[i]]) {
			return true;
		}
	}
	return false;
}


void printTurn(int turn, char simbol)
{
	if (turn == 1) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
	}
	else if (turn == 2 || turn == 3){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	}
	if (turn == 1 || turn == 2) {
		cout << "\tPlayer" << turn;
		resetColor();
		cout << " (" << simbol << ")의 차례입니다.\n";
		cout << "    원하는 위치를 입력해주세요 >> ";
	}
	else {
		cout << "\tComputer" << turn;
		resetColor();
		cout << " (" << simbol << ")의 차례입니다.\n";
		Sleep(800);
	}
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
		else {
			cout << "\n\t\t\t\t올바른 값을 입력해주세요.";
		}
	}
}

// explanation
void printExplain()
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 014);
	cout << "\n\n\t\t<< tic tac toe 게임설명 >>\n\n\n";
	resetColor();
	cout << "    > Player1과 Player2는 번갈아가며 말을 둡니다.\n";
	cout << "    > Player1은 'O', Player2는 'X'로 표시됩니다.\n";
	cout << "    > 두 사람 중 가로, 세로, 대각선 중 하나라도 3개가 연결되면 이깁니다.\n";
	cout << "    > 두 사람 모두 연결에 실패하면 비깁니다.\n\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
	cout << "            2. 혼자하기 \t 3. 두 명에서 하기\n\n";
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

void changeColor(int color) 
{
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

void resetColor() 
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}