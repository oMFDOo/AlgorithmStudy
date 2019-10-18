#include <stdio.h> 
#include <time.h> 
#include <string>
#include <iostream>
#include <string.h>
#include <Windows.h>
using namespace std;

enum color {
	black, blue, green, skyblue, red,
	purple, yellow, white, grey, lightBlue,
	lightGreen, lightSkyblue, lightRed,
	lightPurple, lightYellow, darkWhite
};

int main() {


	string type[] = { "■■■  ", "    ■  ", "■      ", "■  ■  ", "        " };
	int output[] = { 3330, 11111, 1020, 1010, 33011, 2010, 2030, 1111, 3030, 3010, 44441, 41414 };
	int output2[] = { 333330, 1111111, 110220, 110110, 3330111, 220110, 220330, 111111, 330330, 330110, 4444441, 4144414 };

	while (true)
	{
		struct tm *date;
		const time_t t = time(NULL);
		int time[6] = { 0 };
		date = localtime(&t);

		time[0] = date->tm_year - 100;
		time[1] = date->tm_mon + 1;
		time[2] = date->tm_mday;
		time[3] = date->tm_hour;
		time[4] = date->tm_min;
		time[5] = date->tm_sec;

		char total[18] = {};

		int cnt = 0;
		for (int i = 0; i < 12; i += 2) {

			total[i] = time[cnt] / 10 + '0';
			total[i + 1] = time[cnt] % 10 + '0';

			cnt++;
		}

		int div = 10000;

		int len = strlen(total);
		system("cls");
		cout << endl << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), white);

		for (int i = 0; i < 5; i++) {
			cout << "\t";
			for (int j = 0; j < len / 2; j++) {
				int num = total[j] - 48;
				int temp = 100000 / (int)pow(10, i);
				int result = ((output[num]) % temp) / div;
				cout << type[result];

				if (j % 2 && j > 0 && j < len / 2 - 1) {
					num = 10;
					result = ((output[num]) % temp) / div;
					cout << type[result];
				}
			}
			div /= 10;
			cout << endl;
		}

		cout << "\n\n";
		for (int i = 0; i < 90; i++) {
			cout << "=";
		}
		cout << "\n\n\n";
		div = 1000000;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), green);
		for (int i = 0; i < 7; i++) {
			cout << "  \t";
			for (int j = len / 2; j < len; j++) {
				int num = total[j] - 48;
				int temp = 10000000 / (int)pow(10, i);
				int result = ((output2[num]) % temp) / div;
				cout << type[result];

				if (j % 2 && j > 0 && j > len / 2 && j < len - 1) {
					num = 11;
					result = ((output2[num]) % temp) / div;
					cout << type[result];
				}
			}
			div /= 10;
			cout << endl;
		}
		cout << endl;
		Sleep(500);
	}
}