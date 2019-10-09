//#include <iostream>
//#include <algorithm>
//#include <cstring>
//#include <cstdlib>
//#include <string>
//#include <cmath>
//using namespace std;
//
//bool findSameNumber(int list[], int size) {
//	for (int i = 3; i < size; i++) {
//		for (int j = i - 3; j < i; j++) {
//			if (list[i] == list[j]) {
//				return false;
//			}
//		}
//	}
//	return true;
//}
//
//bool findSortedNumber(int list[], int sortedList[], int size) {
//	int cnt = 0;
//	for (int i = 0; i < size; i++) {
//		for (int j = 0; j < size; j++) {
//			if (list[i] == sortedList[j]) {
//				if (list[i + 1] == sortedList[j + 1] &&
//					list[i + 2] == sortedList[j + 2]) {
//					return false;
//				}
//			}
//		}
//	}
//	return true;
//}
//
//int main() {
//	int TC;
//	cin >> TC;
//	while (TC--) {
//		int num, list[500] = { 0 }, sortedList[500] = { 0 };
//		bool R1 = true, R2 = true;
//		cin >> num;
//
//		for (int i = 0; i < num; i++) {
//			cin >> list[i];
//		}
//		findSameNumber(list, num);
//		for (int i = 0; i < num; i++) {
//			sortedList[i] = list[i];
//		}
//
//		sort(sortedList, sortedList + num);
//
//		if (num > 3) {
//			R1 = findSameNumber(list, num);
//			R2 = findSortedNumber(list, sortedList, num);
//		}
//		else if (num == 1) {
//			R1 = true;
//			R2 = true;
//		}
//		else {
//			if (list[0] == list[num - 1]) {
//				R1 = false;
//			}
//		}
//		if (R1&&R2) {
//			cout << "good\n";
//		}
//		else {
//			cout << "bad\n";
//		}
//	}
//}