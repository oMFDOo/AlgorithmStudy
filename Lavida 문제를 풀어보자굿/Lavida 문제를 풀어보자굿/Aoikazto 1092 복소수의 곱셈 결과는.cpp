//#include <stdio.h>
//#pragma warning (disable : 4996)
//
//int main() {
//	while (1) {
//		int a, ai, b, bi;
//
//		scanf("%d %d %d %d", &a, &ai, &b, &bi);
//		if (a == 0 && ai == 0 && b == 0 && bi == 0) {
//			break;
//		}
//
//		int sum = 0, sumi = 0;
//
//		sum = a * b - ai * bi;			// 실수부 계산
//		sumi = a * bi + ai * b;			// 허수부 계산
//
//		if (sumi != 0 && sum == 0) {	// 허수부만 존재
//			printf("Imaginary\n");
//		}
//		if (sumi != 0 && sum != 0) {	// 둘 모두 존재
//			printf("Complex\n");
//		}
//		if ((sumi == 0 && sum != 0) || (sum == 0 && sumi == 0)) {	// 실수부만 존재
//			printf("Real\n");
//		}
//	}
//}