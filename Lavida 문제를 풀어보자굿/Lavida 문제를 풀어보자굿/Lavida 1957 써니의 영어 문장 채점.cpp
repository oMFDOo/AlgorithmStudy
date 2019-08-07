//#include <iostream>
//#include <algorithm>
//#include <cstring>
//#include <cstdlib>
//#include <cmath>
//#include <string>
//#include <sstream>
//#include <fstream>
//using namespace std;
//
//#define CHECK_POINT 5
//
//struct Player {
//	char P29[5] = { 'W', 'X', 'Y', 'Z', 0 };
//	char P15[5] = { 'B', 'D', 'F', 'P', 0 };
//	char P8[5] = { 'A', 'E', 'I', 'O', 'U' };
//	char P7[5] = { 'R', 'S', 'T', 0, 0 };
//};
//
//int main() {
//	int TC;
//	cin >> TC;
//	while (TC--) {
//		Player P;
//		string english;
//
//		int t = 0;
//		getline(cin, english);
//
//		int sum = 0, len = english.length();
//
//		for (int i = 0; i < len; i++) {
//			english[i] = toupper(english[i]);
//			for (int j = 0; j < CHECK_POINT; j++) {
//				if (P.P29[j] == english[i])
//					sum += 29;
//				else if (P.P15[j] == english[i])
//					sum += 15;
//				else if (P.P8[j] == english[i])
//					sum += 8;
//				else if (P.P7[j] == english[i])
//					sum -= 7;
//			}
//		}
//		cout << sum << endl;
//	}
//}