//#include <stdio.h>
//#include <math.h>
//#pragma warning (disable : 4996)
//
//int main() {
//	int TC;
//	scanf("%d", &TC);
//	while (TC--) {
//		int T, a[1001], sum=0, cnt=0;
//		double arg;
//		scanf("%d", &T);
//		for (int i = 0; i < T; i++) {
//			scanf("%d", &a[i]);
//			sum += a[i];
//		}
//		arg = (double) sum / T;
//		for (int i = 0; i < T; i++) {
//			if (arg < a[i]) {
//				cnt++;
//			}
//		}
//		arg = (double)(cnt *100.0 / T);
//		printf("%.3lf%c \n", arg, '%');
//	}
//}