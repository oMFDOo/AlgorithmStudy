//#include <stdio.h>
//#include <math.h>
//#pragma warning (disable : 4996)
//
//int main() {
//	int TC;
//	scanf("%d\n", &TC);
//	while (TC--) {
//		int A, B, a, b, c, d;
//		int sum = 0;
//		scanf("%d %d %d %d %d %d", &A, &B, &a, &b, &c, &d);
//
//		if (A > B) {
//			int r = A;
//			A = B;
//			B = r;
//		}
//		for (A; A <= B; A++)
//			if (A % 2 == 0)
//				sum += A;
//
//		if (sum%a == 0 && sum%b == 0 && sum%c == 0 && sum%d == 0)
//			printf("Yes\n");
//		else
//			printf("No\n");
//	}
//}