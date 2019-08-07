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
//
//struct plusPoint {
//	char word[50];
//	int point;
//};
//
//int main() {
//	plusPoint P[15];
//	char english[30];
//
//	
//	int testWordNumber, testCentenceNumber;
//
//	cin >> testWordNumber >> testCentenceNumber;
//	for (int i = 0; i < testWordNumber; i++) {
//		cin >> P[i].word >> P[i].point;
//		int temp = strlen(P[i].word);
//		for (int j = 0; j < temp; j++) {
//			P[i].word[j] = toupper(P[i].word[j]);
//		}
//	}
//	while (testCentenceNumber--) {
//		int sum = 0;
//		while (true) {
//
//			cin >> english;
//
//			if (strcmp(english, ".") == 0) {
//				break;
//			}
//
//			int len = strlen(english);
//
//			for (int i = 0; i < len; i++) {
//				english[i] = toupper(english[i]);
//			}
//
// 			sum += len * 2;
//
//			for (int i = 0; i < testWordNumber; i++) {
//				if (strcmp(P[i].word, english) == 0) {
//					sum += P[i].point;
//					sum -= len * 2;
//				}
//			}
//		}
//		cout << sum << endl;
//	}
//}