//#include <stdio.h>
//#include <math.h>
//
//int main() {
//	int T, a, b, c, p, q, r, sum;
//	double result;
//	scanf("%d", &T);
//	while (T--) {
//		scanf("%d %d %d %d %d %d", &a, &b, &c, &p, &q, &r);
//		sum = a * p + b * q + c;
//		if (sum < 0)
//			sum = -sum;
//		result = (double)sum / sqrt(a * a + b * b) - fabs(r);
//		if (result <= 0) {
//			result = 0.0;
//		}
//		result = round(result * 10000) / 10000;
//		printf("%.4f\n", result);
//	}
//}