//#include <iostream>
//#include <algorithm>
//#include <string.h>
//#include <math.h>
//
//using namespace std;
//
//int main() {
//	int TC;
//	cin >> TC;
//	while (TC--) {
//		char name1[105] = { 0 }, name2[105] = { 0 };
//		int len1, len2, longName;
//
//		cin >> name1 >> name2;
//
//		len1 = strlen(name1);
//		len2 = strlen(name2);
//
//		/* 긴 이름 찾기 */
//		if (len1 > len2) {
//			longName = len1;
//		}
//		else {
//			longName = len2;
//		}
//		for (int i = len1; i < 100; i++) {
//			name1[i] = '@';
//		}
//		for (int i = len2; i < 100; i++) {
//			name2[i] = '@';
//		}
//		//64 빼주기
//		int sum = 0, temp;
//		for (int i = 0; i < longName; i++) {
//			temp = (name1[i] - 64) - (name2[i] - 64);
//			sum += pow(temp, 2);
//		}
//		sum = sum/longName;
//		cout << sum << "\n";
//	}
//}