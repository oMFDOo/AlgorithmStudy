//#include <stdio.h>
//#include <math.h>
//#pragma warning (disable : 4996)
//
//const int MAX = 100001;
//bool num[MAX] = {1, 1, 0};
//
//void isPrime() {
//
//	int Limit = (int)sqrt(MAX);
//
//	for (int i = 2; i < Limit; i++) {
//		if (!num[i])
//			for (int j = i * i; j < MAX; j += i) {
//				num[j] = 1;
//			}
//	}
//}
//
//
//int main() {
//	int testCase = 0;
//
//	scanf("%d", &testCase);
//
//	isPrime();
//
//	for (int i = 0; i < testCase; i++) {
//		int x, y;
//
//		scanf("%d %d", &x, &y);
//		int result = 0;
//		for (int j = x; j <= y; j++) {
//			if (num[j] == false)
//				result++;
//		}
//
//		printf("%d\n", result);
//	}
//}
