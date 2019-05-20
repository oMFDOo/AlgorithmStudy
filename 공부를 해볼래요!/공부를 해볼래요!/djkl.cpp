//#include <stdio.h>
//#include <string.h>
//#include <math.h>
//#pragma warning (disable : 4996)
//
//int main() {
//
//	int testCase;
//
//	scanf("%d", &testCase);
//
//	while (testCase--) {
//
//		int a, b, result, day;
//		scanf("%d %d", &a, &b);
//
//		result = (a - b) % 25000;
//		day = (a - b) / 25000;
//
//		if (a - b <= 0) {
//			printf("0\n");
//		}
//
//		else if (result == 0) {
//			printf("%d\n", day);
//		}
//
//		else if (result > 0) {
//			printf("%d\n", day + 1);
//		}
//	}
//}