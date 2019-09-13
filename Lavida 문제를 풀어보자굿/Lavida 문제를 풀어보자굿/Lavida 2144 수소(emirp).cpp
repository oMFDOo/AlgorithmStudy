//#include <stdio.h>
//#include <math.h>
//#pragma warning (disable : 4996)
//
//const int LIMIT = 100001;
//bool b[LIMIT] = { 1, 1, 0 };
//
//void Prime4() {
//	int sqrtlimit = (int)sqrt(LIMIT);
//
//	for (int i = 2; i <= sqrtlimit; i++) {
//		if (!b[i]) {
//			for (int j = i * i; j < LIMIT; j = j + i) {
//				b[j] = 1;
//			}
//		}
//	}
//}
//
//int reverseNumber(int num) {
//	int numR = 0;
//	while (num) {
//		numR = (num % 10)+(numR*10);
//		num /= 10;
//	}
//	return numR;
//}
//
//int main() {
//	Prime4();
//	int TC;
//	scanf("%d", &TC);
//	while (TC--) {
//		int start, end;
//		scanf("%d %d", &start, &end);
//
//		if (start > end) {
//			int temp = start;
//			start = end;
//			end = temp;
//		}
//
//		int min = 200000, max = -1, cnt = 0;
//		for (int i = start; i <= end; i++) {
//			bool flag = true;
//			if (b[i] == 0) {
//				int reverse = reverseNumber(i);
//				if (reverse == i) {
//					flag = false;
//				}
//				if (b[reverse] == 1) {
//					flag = false;
//				}
//				if (flag) {
//					if (min > i) {
//						min = i;
//					}
//					if (max < i) {
//						max = i;
//					}
//					cnt++;
//				}
//			}
//		}
//		if (min == 200000 && max == -1) {
//			printf("0 0 0\n");
//		}
//		else {
//			printf("%d %d %d\n", max, min, cnt);
//		}
//	}
//}