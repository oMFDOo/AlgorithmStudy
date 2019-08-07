//////#include <stdio.h>
//////#include <string.h>
//////#pragma warning (disable : 4996)
//////
//////char ChangedString[130] = {0};
//////int cnt = 0, index = 0, T = 0;
//////
//////int Binary_Transformation(int a) {
//////	if (cnt < 8) {
//////		T += a << cnt;
//////		ChangedString[index] = T;
//////		cnt++;
//////		if (cnt == 7) {
//////		///printf("A : %c\n", ChangedString[index]);
//////		}
//////	}
//////	else {
//////		T = 0;
//////		cnt = 0;
//////		index++;
//////		T += a << cnt;
//////		ChangedString[index] = T;
//////		cnt++;
//////	}
//////	return T;
//////}
//////
//////int main() {
//////	while (1) {
//////		char FindWord[6], BinaryNumber[130];
//////		int WordLen, BinaryLen;
//////
//////		scanf("%s %s", FindWord, BinaryNumber);
//////
//////		if ((FindWord[0] == 'N' && BinaryNumber[0] == 'N')) {
//////			if (FindWord[1] == 'U' && BinaryNumber[1] == 'U') {
//////				if (FindWord[2] == 'L' && BinaryNumber[2] == 'L') {
//////					if (FindWord[3] == 'L' && BinaryNumber[3] == 'L') {
//////						break;
//////					}
//////				}
//////			}
//////		}
//////
//////		WordLen = strlen(FindWord);
//////		BinaryLen = strlen(BinaryNumber);
//////
//////		index = 0;
//////		T = 0;
//////		cnt = 0;
//////
//////		for (int i = BinaryLen - 1; i > 0; i--) {
//////			Binary_Transformation(BinaryNumber[i] - '0');
//////		}
//////
//////		int ChangedStringLen, check = 0, Found = 0;
//////		ChangedStringLen = strlen(ChangedString);
//////
//////		for (int y = ChangedStringLen - 1; y > 0; y--) {
//////			int z = y;
//////			for (int x = 0; x < WordLen; x++) {
//////				///printf("F : %c %c\n", FindWord[x], ChangedString[z]);
//////				if (FindWord[x] == ChangedString[z]) {
//////					check++;
//////					if (check == WordLen) {
//////						break;
//////					}
//////					z--;
//////				}
//////				else {
//////					check = 0;
//////					break;
//////				}
//////			}
//////			if (check == WordLen) {
//////				break;
//////			}
//////		}
//////		///printf("Len : %d %d\n", check, WordLen);
//////		if (check == WordLen) {
//////			printf("Found!\n");
//////		}
//////		else {
//////			printf("Not found!\n");
//////		}
//////	}
//////}
////
////
////
//////bool ihatecharchar(string A, string B) {
//////	int cnt = 0, Molla = 1;
//////	bool TF = false;
//////	for (int a = 0; a < B.length() && Molla; a++) {
//////		for (int b = 0; b < A.length() && a+b < B.length(); b++) {
//////			if (A[b] == B[a+b]) {
//////				cnt++;
//////				if (cnt == A.length()) {
//////					Molla = 0;
//////					break;
//////				}
//////			}
//////			else {
//////				cnt = 0;
//////			}
//////		}
//////	}
//////	if (A.length() == cnt) {
//////		TF = true;
//////	}
//////	return TF;
//////}
////#include <iostream>
////#include <algorithm>
////#include <string>
////#include <cstdlib>
////#include <cmath>
////#include <vector>
////
////using namespace std;
////
////// 0101->¾Æ½ºÅ°
////
////char binary(string A) {
////	char sum = 0;
////	for (int i = 0; i < 8; i++) {
////		sum += (A[7 - i] - '0') << i;
////
////	}//cout << sum << endl;
////	return sum;
////}
////
////vector<string> split(string B) {
////	vector<string> result;
////
////	for (int i = 0; i < 16; i++) {
////		string s;
////		for (int c = 0; c < 8; c++) {
////			s += B[c + 8 * i];
////		}
////		result.push_back(s);
////	}
////	return result;
////}
////int main() {
////	while (1) {
////		string A, B, exit = {"NULL"};
////
////		cin >> A >> B;
////
////		if (A == exit && B == exit) {
////			break;
////		}
////
////		vector<string> s = split(B);
////
////		string conv;
////
////		for (int i = 0; i < s.size(); i++) {
////			conv += binary(s[i]);
////		}
////		if (conv.find(A) != -1) {
////			cout << "Found!\n";
////		}
////		else {
////			cout << "Not found!\n";
////		}
////	}
////}
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	while (1) {
//		string s1, s2, s2_converted;
//		cin >> s1 >> s2;
//		if (s1 == "NULL" && s2 == "NULL") break;
//
//		for (int i = 0; i < 16; ++i) {
//			s2_converted += stoi(s2.substr(i * 8, 8), 0, 2);
//		}
//
//		if ((s2_converted.find(s1, 0)) != string::npos) {
//			cout << "Found!" << '\n';
//		}
//		else {
//			cout << "Not found!" << '\n';
//		}
//
//	}
//	return 0;
//}