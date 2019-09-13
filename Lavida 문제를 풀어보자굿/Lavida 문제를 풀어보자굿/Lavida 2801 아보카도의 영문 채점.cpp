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
//	}
//	while (testCentenceNumber--) {
//		int sum = 0, cnt = 0;
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
//			sum += len;
//			
//			for (int i = 0; i < testWordNumber; i++) {
//				if (strcmp(P[i].word, english) == 0) {
//					sum -= P[i].point;
//					sum -= len;
//					break;
//				}
//			}
//			if (cnt > 0) {
//				for (int i = 0; i < len; i++) {
//					if (english[i] > 'A' && english[i] < 'Z') {
//						sum -= len + 2;
//						break;
//					}
//				}
//			}
//			else {
//				for (int i = 1; i < len; i++) {
//					if (english[0] > 'a' && english[0] < 'z') {
//						sum -= len + 2;
//						break;
//					}
//					if (english[i] > 64 && english[i] < 91) {
//						sum -= len + 2;
//						break;
//					}
//				}
//			}
//			cnt++;
//		}
//		if (sum < 0) {
//			cout << "Fail\n";
//		}
//		else {
//			cout << sum << endl;
//		}
//	}
//}