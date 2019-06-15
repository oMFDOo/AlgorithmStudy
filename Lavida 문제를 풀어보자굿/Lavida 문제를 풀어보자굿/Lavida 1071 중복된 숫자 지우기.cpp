//#include <stdio.h>
//#pragma warning (disable : 4996)
//
//int main() {
//	int TC;
//	scanf("%d", &TC);
//	while (TC--) {
//		int a, b, num[100], cnt = 0;
//		scanf("%d", &a);
//		for (int i = 0; i < a; i++) {
//			scanf("%d", &num[i]);
//		}
//		int temp;
//		for (int i = 0; i < a; i++) {
//			for (int j = 0; j + 1 < a - i; j++) {
//				if (num[j] > num[j + 1]) {
//					temp = num[j];
//					num[j] = num[j + 1];
//					num[j + 1] = temp;
//				}
//			}
//		}
//		printf("%d ", num[0]);
//		for (int i = 1; i < a; i++) {
//			if (num[i] != num[i - 1]) {
//				printf("%d ", num[i]);
//			}
//		}
//		printf("\n");
//	}
//}