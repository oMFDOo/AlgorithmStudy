#include <iostream>
#include <Windows.h>		// Adornment
#include <cstdlib>			// To use "atoi"
#include <string>			// To use "string"
#include <array>			// To use "array"
#include <random>
#include <ctime>
using namespace std;


// Print
void printBoard();			
void printExplain();		
void printMain();			
void printTurn(int, char);	

// Adornment
void changeColor(int);		
void resetColor();			

// Judgment
int selectMode();			
void playerChoice(int);		
bool checkWin();			
int choiceDifferenty();		
bool gameOver();			

// Result
void printWin(int);			
void printDraw();

// Difficulty
void computerChoiceBeginner();
void computerChoiceIntermediate();

// Change Board
array <char, 50> boardSet = { 'o','1','2','3','4','5','6','7','8','9' };

// Choice Case
array <int, 8> front = { 1,4,7,1,2,3,1,3 };
array <int, 8> middle = { 2,5,8,4,5,6,5,5 };
array <int, 8> endNum = { 3,6,9,7,8,9,9,7 };

// Player Name
string winner[] = { " ","\tPLAYER_1", "\tPLAYER_2", "\tCOMPUTER" };

// Text Color
enum color {
	black, blue, green, skyblue, red,
	purple, yellow, white, grey, lightBlue,
	lightGreen, lightSkyblue, lightRed,
	lightPurple, lightYellow, darkWhite
};


int main() {

	bool startGame = true;		// 프로그램 종료 여부 판단
	printMain();
	while (startGame) {

		// 보드판 초기화
		boardSet = { 'o','1','2','3','4','5','6','7','8','9' };

		bool  gameMode = true;		// 게임 종료 여부 판단
		int mode, turnCount = 0;

		// 모드선택 : 1. 게임 설명	2. 1인 플레이	3. 2인 플레이
		mode = selectMode();

		// 1. 게임설명
		if (mode == 1) {
			printExplain();
		}

		// 2. 1인 플레이
		if (mode == 2) {
			int difficulty = choiceDifferenty();	// 컴퓨터 난이도 선택
			while (gameMode) {

				printBoard();						// 보드 출력
				cout << endl;
				printTurn(1, 79);					// 차례 출력 : 플레이어 정보와 'O'혹은 'X'의 아스키 코드값 전송 
				playerChoice(turnCount);			// 플레이어의 선택

				if (checkWin()) {					// 승리 판정
					printWin(1);						// "WIN" 출력
					startGame = gameOver();			//게임 진행 여부 확인 
					printMain();
					break;
				}
				turnCount++;						// turn 횟수를 이용해 차례와 게임진행 파악
				if (turnCount > 8) {				// 9번이 진행되면 게임종료
					gameMode = false;
					printDraw();
					startGame = gameOver();
					if (!gameMode) {
						printMain();
						break;
					}
				}
				printBoard();
				printTurn(3, 88);
				if (difficulty == 2) {				// 난이도 선택에 따른 알고리즘 변화
					computerChoiceIntermediate();	// 중급
				}
				else if (difficulty == 1) {
					computerChoiceBeginner();		// 초급
				}
				if (checkWin()) {
					printWin(3);
					startGame = gameOver();
					printMain();
					break;
				}
				turnCount++;
			}
		}

		// 3. 2인 플레이	: 난이도를 제외한 동일한 로직
		else if (mode == 3) {
			while (gameMode) {

				printBoard();
				cout << endl;
				printTurn(1, 79);
				playerChoice(turnCount);
				if (checkWin()) {
					printWin(1);
					startGame = gameOver();
					printMain();
					break;
				}
				turnCount++;
				if (turnCount > 8) {
					gameMode = false;
					printDraw();
					startGame = gameOver();
					if (!gameMode) {
						printMain();
						break;
					}
				}
				printBoard();
				printTurn(2, 88);
				playerChoice(turnCount);
				if (checkWin()) {
					printWin(2);
					startGame = gameOver();
					printMain();
					break;
				}
				turnCount++;
			}
		}
	}
}

void printMain()
{
	system("cls");	// 콘솔의 화면 지우기
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), green);	// 색상 처리
	cout << endl << endl;
	cout << "_______________________________________________________________________________________________" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), lightBlue);
	cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), darkWhite);
	cout << " '      '             '          *         '            '                      *         '" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), lightRed);
	cout << "\t" << R"(	  ______________     ______________        ______________)" << endl;
	cout << "\t" << R"(	 /             /    /             /       /             /)" << endl;
	cout << "\t" << R"(	/____     ____/    /____     ____/       /____     ____/)" << endl;
	cout << "\t" << R"(            /    /             /    /	             /    /)" << endl;
	cout << "\t" << R"(           /    /   /         /    /                /    /)" << endl;
	cout << "\t" << R"(          /    /      ___    /    /   ___    ___   /    /  __    ___)" << endl;
	cout << "\t" << R"(         /    /   /  /      /    /   /   \  /     /    /  /  \  /___\)" << endl;
	cout << "\t" << R"(        /____/   /   \___  /____/    \__/ \ \___ /____/   \__/  \___)" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), darkWhite);
	cout << "        '             '          *                            '                 '   " << endl;
	cout << " '            *                            '            '             *         '         '" << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), lightBlue);
	cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), green);
	cout << "_______________________________________________________________________________________________" << endl;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), lightYellow);
	cout << "\t\t1. 게임설명 \t2. 혼자 하기 \t3. 두 명에서 하기\n\n";
	cout << "\t\t\t원하는 모드의 번호를 입력해주세요 >> ";

	resetColor();	// 흰색으로 초기화

}

void printWin(int winNumber)
{

	int print;	// 승자에 따른 win 색상변화
	if (winNumber == 1) {
		print = lightBlue;
	}
	else {
		print = lightRed;
	}

	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), green);
	cout << endl << endl;
	cout << "_______________________________________________________________________________________________" << endl;
	cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl << endl;
	cout << " '      '             '          *         '            '                      *         '" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), print);
	cout << "\t\t" << winner[winNumber] << endl;	// 승자 이름 출력
	cout << "\t\t" << R"(   *  ___  ___  ___  _________   _____       ___    '             ')" << endl;
	cout << "\t\t" << R"(     /  / /  / /  / /__   ___/  /     | '   /  /        ')" << endl;
	cout << "\t\t" << R"(  ' /  / /  / /  /    /  /     /  /|  |    /  /                         ')" << endl;
	cout << "\t\t" << R"(   /  / /  / /  /    /  /  '  /  / |  |   /  /   '           ')" << endl;
	cout << "\t\t" << R"(  /  / /  / /  /    /  /     /  /  |  |  /  /      *      ')" << endl;
	cout << "\t\t" << R"( /  /_/  /_/  / *  /  /     /  /   |  | /  /                   )" << endl;
	cout << "\t\t" << R"( |           /  __/  /___  /  /    |  |/  /    ')" << endl;
	cout << "\t\t" << R"( \____/\____/  /________/ /__/     |_____/       *           ')" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), green);
	cout << "        '             '          *                            '                 '   " << endl;
	cout << " '            *                            '            '             *         '         '" << endl << endl;
	cout << "_______________________________________________________________________________________________" << endl;
	cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;

	resetColor();
}

void printDraw()
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), green);
	cout << endl << endl;
	cout << "___________________________________________________________________________________________" << endl;
	cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl << endl;
	cout << " '      *             '                   '            *                      *         '" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), lightPurple);
	cout << R"(            __________        ____________        ___________  '    ___  ___  ___)" << endl;
	cout << R"(           /   _____  \  *   /  ________  \      /  ______   |     /  / /  / /  /)" << endl;
	cout << R"(          /   /     \  \    /  /        |  |    /  /      |  |  ' /  / /  / /  /)" << endl;
	cout << R"(    '    /   /      |  |   /  /_______ /  /    /  /_______|  |   /  / /  / /  /)" << endl;
	cout << R"(        /   /      |  |   /  ________    /  ' /  _________/  |  /  / /  / /  /)" << endl;
	cout << R"(       /   /   '  /  /   /  /        \  \    /  /        /  /  /  /_/  /_/  /)" << endl;
	cout << R"(  '   /   /______/  /   /  /         |  |   /  /        /  /   |           /)" << endl;
	cout << R"(      |____________/   /__/          |__|  /__/   '    /__/ *  \____/\____/)" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), green);
	cout << "        '                       '                            '                 '   " << endl;
	cout << " '      '        *                  '       *     '                      '         '" << endl << endl;
	cout << "___________________________________________________________________________________________" << endl;
	cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;

	resetColor();
}

bool gameOver() {
	while (true) {		// 프로그램 종료 의사 확인
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), lightYellow);
		cout << "\t\t\t1. 다시하기 \t 2.그만두기\n\n";

		string inputRestart;		// 종료 의사 확인
		resetColor();
		cin >> inputRestart;
		int restart = atoi(inputRestart.c_str());		// string형식을 int 형식으로 변환

		if (restart == 1) {			// 프로그램 가동
			return true;
		}
		else if (restart == 2) {	// 프로그램 종료
			return false;
		}
		else {						// 예외 발생
			cout << "올바른 번호를 입력해주세요. \n\n";
		}
	}
}

int choiceDifferenty()
{
	cout << "\n\t\t\t\t난이도를 입력해주세요.\n\n";
	cout << "\t\t\t    1. 초급\t 2. 중급\n\t\t\t>>";
	while (true) {
		string inputDifferenty;
		cin >> inputDifferenty;			// 난이도 선택

		int differenty;
		differenty = atoi(inputDifferenty.c_str());

		if (differenty == 1) {			// 난이도 : 초급
			return differenty;
		}
		else if (differenty == 2) {		// 난이도 : 중급
			return differenty;
		}
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
		if (boardSet[num] == 'O' || boardSet[num] == 'X') {		// 이미 선택된 경우
			flag = false;										// flag값 변화로	
		}
		if (flag) {												// 값이 return되지 않음
			boardSet[num] = 'X';								// 그렇지 않다면 그 자리를 체크 후 return
			return;
		}
	}
}

void computerChoiceIntermediate()
{
	// 만약 일직선 상의 'X'가 2개면 'X'를 두어 한 줄을 마무리하라
	for (int i = 0; i < 8; i++) {
		// 경우의 수
		char frontToChar = front[i] + 48, middleToChar = middle[i] + 48, endToChar = endNum[i] + 48;

		// 공격
		if (boardSet[front[i]] == 'X' && boardSet[middle[i]] == 'X' && boardSet[endNum[i]] == endToChar) {
			boardSet[endNum[i]] = 'X';
			return;
		}
		else if (boardSet[front[i]] == 'X' && boardSet[endNum[i]] == 'X'&& boardSet[middle[i]] == middleToChar) {
			boardSet[middle[i]] = 'X';
			return;
		}
		else if (boardSet[middle[i]] == 'X' && boardSet[endNum[i]] == 'X' && boardSet[front[i]] == frontToChar) {
			boardSet[front[i]] = 'X';
			return;
		}
	}

	// 만약 일직선 상의 'O'가 2개면 'X'를 두어 한 줄을 마무리하라
	for (int i = 0; i < 8; i++) {
		char frontToChar = front[i] + 48, middleToChar = middle[i] + 48, endToChar = endNum[i] + 48;

		// 수비
		if (boardSet[front[i]] == 'O' && boardSet[middle[i]] == 'O' && boardSet[endNum[i]] == endToChar) {
			boardSet[endNum[i]] = 'X';
			return;
		}
		else if (boardSet[front[i]] == 'O' && boardSet[endNum[i]] == 'O'&& boardSet[middle[i]] == middleToChar) {
			boardSet[middle[i]] = 'X';
			return;
		}
		else if (boardSet[middle[i]] == 'O' && boardSet[endNum[i]] == 'O' && boardSet[front[i]] == frontToChar) {
			boardSet[front[i]] = 'X';
			return;
		}
	}

	// 위의 조건이 성립하지 않았다면
	// random하게 수를 두어라
	computerChoiceBeginner();
}

void playerChoice(int turn)
{
	while (true) {
		string inputPlace;
		cin >> inputPlace;
		int place = atoi(inputPlace.c_str());

		if (place > 9 || place == 0) {					// 1~9번까지의 수가 아닌 경우와 atoi로 변환되지 않은 경우
			cout << "\r올바른 위치를 선택해주세요.\n\n";
		}
		else if (boardSet[place] == 'O' || boardSet[place] == 'X') {	// 'X'나 'O'로 선택되어 있는 경우
			cout << "\r이미 선택된 자리 입니다.\n";
		}
		else {
			if (turn % 2) {				// turn이 홀수인 경우에는 'X'의 차례
				boardSet[place] = 'X';
				return;
			}
			else {						// turn이 짝수인 경우에는 'O'의 차례
				boardSet[place] = 'O';
				return;
			}
		}
	}
}

bool checkWin()
{
	// 승리 조건을 반복문을 돌며 판독
	for (int i = 0; i < front.size(); i++) {
		if (boardSet[front[i]] == boardSet[middle[i]] && boardSet[middle[i]] == boardSet[endNum[i]]) {
			return true;
		}
	}
	return false;
}


void printTurn(int playerNumber, char simbol)
{
	if (playerNumber == 1) {	// Player1인 경우는 파란색
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), lightBlue);
	}
	else if (playerNumber == 2 || playerNumber == 3) {	// Player2, Computer인 경우는 빨간색으로 작성
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), lightRed);
	}
	if (playerNumber == 1 || playerNumber == 2) {		// 사람인경우
		cout << "\tPlayer" << playerNumber;
		resetColor();
		cout << " (" << simbol << ")의 차례입니다.\n";
		cout << "    원하는 위치를 입력해주세요 >> ";
	}
	else {												// 컴퓨터인 경우
		cout << "\tComputer" << playerNumber;
		resetColor();
		cout << " (" << simbol << ")의 차례입니다.\n";
		Sleep(800);
	}
}

// mode select
int selectMode()
{

	while (true) {
		string inputMode;		// 모드 선정
		cin >> inputMode;		// 1. 게임 설명, 2. 혼자 하기, 3. 두 명에서 하기

		int mode;
		mode = atoi(inputMode.c_str());

		if (mode == 1) {
			return mode;
		}
		else if (mode == 2) {
			return mode;
		}
		else if (mode == 3) {
			return mode;
		}
		else {					// 예외 처리
			cout << "\n\t\t\t\t올바른 값을 입력해주세요.";
		}
	}
}

// explanation
void printExplain()
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), lightRed);
	cout << "\n\n\t\t<< tic tac toe 게임설명 >>\n\n\n";
	resetColor();
	cout << "    > Player1과 Player2는 번갈아가며 말을 둡니다.\n";
	cout << "    > Player1은 'O', Player2는 'X'로 표시됩니다.\n";
	cout << "    > 두 사람 중 가로, 세로, 대각선 중 하나라도 3개가 연결되면 이깁니다.\n";
	cout << "    > 두 사람 모두 연결에 실패하면 비깁니다.\n\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), lightBlue);
	cout << "            2. 혼자하기 \t 3. 두 명에서 하기\n\n";
	resetColor();
}

// draw game board
void printBoard()
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), lightYellow);
	cout << "\t======================";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), yellow);
	cout << "\n\t  << Tic Tac Toe >>\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), lightYellow);
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
	cout << boardSet[1];
	resetColor();
	cout << "  |  ";
	changeColor(2);
	cout << boardSet[2];
	resetColor();
	cout << "  |  ";
	changeColor(3);
	cout << boardSet[3];
	resetColor();
	cout << "\t\t■" << endl;

	cout << "  ■\t_____|_____|_____\t■" << endl;
	cout << "  ■\t     |     |     \t■" << endl;

	cout << "  ■\t  ";
	changeColor(4);
	cout << boardSet[4];
	resetColor();
	cout << "  |  ";
	changeColor(5);
	cout << boardSet[5];
	resetColor();
	cout << "  |  ";
	changeColor(6);
	cout << boardSet[6];
	resetColor();
	cout << "\t\t■" << endl;

	cout << "  ■\t_____|_____|_____\t■" << endl;
	cout << "  ■\t     |     |     \t■" << endl;

	cout << "  ■\t  ";
	changeColor(7);
	cout << boardSet[7];
	resetColor();
	cout << "  |  ";
	changeColor(8);
	cout << boardSet[8];
	resetColor();
	cout << "  |  ";
	changeColor(9);
	cout << boardSet[9];
	resetColor();
	cout << "\t\t■" << endl;

	cout << "  ■\t     |     |     \t■" << endl;
	cout << "  ■\t\t\t\t■" << endl;
	cout << "  ■\t\t\t\t■" << endl;
	cout << "  ■■■■■■■■■■■■■■■■" << endl << endl;
}

void changeColor(int color)
{
	// 보드판 출력시
	if (boardSet[color] == 'O') {	// 'O'면 파란색으로 변경
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), lightBlue);
	}
	else if (boardSet[color] == 'X') {	// 'X'면 빨간색으로 변경
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), lightRed);
	}
	else {								// 그 외에는 흰색
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), darkWhite);
	}
}

void resetColor()
{
	// 흰색으로 색 초기화시 사용
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), darkWhite);
}