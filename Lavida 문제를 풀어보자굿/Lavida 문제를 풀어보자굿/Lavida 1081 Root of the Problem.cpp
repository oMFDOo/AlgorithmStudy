//#include <stdio.h>
//#include <math.h>
//#pragma warning (disable : 4996)
//
//int main() {
//	int TC;
//	scanf("%d", &TC);
//	while (TC--) {
//		double N, A, A_, B, C;
//		scanf("%lf %lf", &B, &N);
//		C = B;
//		B = pow(B, 1.0/N);
//		A = fabs(C- pow(round(B),N));
//		A_ = fabs(C - pow((int)B, N));
//		A > A_ ? printf("%d\n", (int)B) : printf("%.lf\n", round(B));
//	}
//}