#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <climits>
using namespace std;

//int Prime1(int num) {
//
//	if (num <= 1) {
//		return 0;
//	}
//	if (num == 2) {
//		return 1;
//	}
//	for (int i = 2; i < num; i++) {
//		if (num % i == 0) {
//			return 0;
//		}
//	}
//	return 1;
//}

//int Prime2(unsigned long long num) {
//	unsigned long long limit;
//	
//	if (num == 2) {
//		return 1;
//	}
//
//	if (num <= 1 || num % 2 == 0) {
//		return 0;
//	}
//
//	limit = (unsigned long long)sqrt(num);
//	for (int i = 3; i <= limit; i += 2) {
//		if (num % i == 0) {
//			return 0;
//		}
//	}
//	return 1;
//}

//const int LIMIT = 100001;
//char a[LIMIT] = { 1, 1, 0 };
//
//void Prime3() {
//	for (int i = 2; i < LIMIT; i++) {
//		if (a[i] == 0) {
//			for (int j = i + i; j < LIMIT; j = j + i) {
//				a[j] = 1;
//			}
//		}
//	}
//}


const unsigned  long LIMIT = 100001;
bool b[LIMIT] = { 1, 1, 0 };

void Prime4() {
	int sqrtlimit = (int)sqrt(LIMIT);

	for (int i = 2; i <= sqrtlimit; i++) {
		if (!b[i]) {
			for (int j = i * i; j < LIMIT; j = j + i) {
				b[j] = 1;
			}
		}
	}
}

int main() {
	int TC;
	cin >> TC;
	while (TC--) {
		unsigned  long  start, end, sum = 0;
		cin >> start >> end;
		Prime4();
		for (int i = start; i <= end; i++) {
			if(b[i] == 0){
				sum++;
			}
		}

		cout << sum << endl;
	}
}