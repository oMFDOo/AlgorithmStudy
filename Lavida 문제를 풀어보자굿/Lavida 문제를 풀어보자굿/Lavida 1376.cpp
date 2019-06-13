//#include <stdio.h>
//#include <string.h>
//#include <math.h>
//#pragma warning (disable : 4996)
//
//int main() {
//	int testCase;
//
//	scanf("%d", &testCase);
//
//	while (testCase--) {
//
//		int a, b, c, x1, y1, r;
//		double d1, d2;
//		double d, result;
//
//		scanf("%d %d %d %d %d %d", &a, &b, &c, &x1, &y1, &r);
//
//		d1 = a * x1 + b * y1 +c;
//		d1 = fabs(d1);
//		d2 = a * a + b * b;
//		d2 = sqrt(d2);
//
//
//		d = d1 / d2 - fabs(r);
//
//		result =  round(d * 10000) / 10000;
//
//		if (result <= 0) {
//			result = 0.0;
//		}
//
//		printf("%.4lf\n", result);
//	}
//}