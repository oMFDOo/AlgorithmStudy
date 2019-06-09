//#include <stdio.h>
//#pragma warning (disable : 4996)
//
//int main() {
//	int TC;
//	scanf("%d", &TC);
//	while (TC--) {
//		int A, B, N;
//		static int num[5000001] = {0};
//		scanf("%d %d %d", &A, &B, &N);
//		for (int i = 0; i < N; i++) {
//			scanf("%d", &num[i]);
//		}
//		for (int i = 0; i < N; i++) {
//			printf("초반 %d 번째 수 : %d \n", i, num[i]);
//		}
//		int temp, sum = 0;
//		/*for (int i = 0; i < N; i++) {
//			for (int j = 0; j + 1 < N - i; j++) {
//				if (num[j] > num[j + 1]) {
//					temp = num[j];
//					num[j] = num[j + 1];
//					num[j + 1] = temp;
//				}
//			}
//		}*/
//		for (int i = 0; i < N; i++) {
//			printf("%d 번째 수 : %d \n", i, num[i]);
//		}
//		for (int i = B; i < N - A; i++) {
//			sum += num[i];
//		}
//		printf("\nsum : %d \n", sum);
//		double avr;
//		N = N - (A + B);
//		avr = (double)sum / N;
//		printf("%lf\n", avr);
//	}
//}