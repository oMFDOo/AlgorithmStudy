//#include <iostream>
//#include <algorithm>
//#include <cstring>
//#include <string>
//using namespace std;
//
//int main() {
//	int TC;
//	cin >> TC;
//	while (TC--) {
//		string substring;
//		cin >> substring;
//
//		int mul = 1, cnt = 0, startIndex = 0;
//		for (int i = 0; i < substring.length(); i++) {
//			if (substring[i] == '(') {
//				mul *= substring[i + 1] - '0';
//				cnt++;
//				startIndex = i;
//			}
//		}
//		if (cnt) {
//			int temp = 0;
//			for (int i = 0; i < substring.length(); i++) {
//				if (i == startIndex) {
//					int j;
//					while (mul--) {
//						for (j = i + 2; substring[j] != ')'; j++) {
//							cout << substring[j];
//						}
//					}
//					i = j;
//				}
//				else {
//					if (substring[i] >= 'A' && substring[i] <= 'Z')
//						cout << substring[i];
//				}
//			}
//
//		}
//		else {
//			cout << substring;
//		}
//		cout << endl;
//
//	}
//}