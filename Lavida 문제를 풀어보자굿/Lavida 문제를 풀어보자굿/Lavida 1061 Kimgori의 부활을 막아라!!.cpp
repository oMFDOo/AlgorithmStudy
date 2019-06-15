//#include <stdio.h>
//#pragma warning (disable : 4996)
//
//int main() {
//	int TC;
//	scanf("%d", &TC);
//	while (TC--) {
//		int a, b, num[100], cnt = 0;
//		scanf("%d %d", &a, &b);
//		for (int i = 1; i <= a; i++) {
//			scanf("%d", &num[i]);
//		}
//		int temp;
//		for (int i = 1; i <= a; i++) {
//			for (int j = 1; j + 1 <= a - i+1; j++) {
//				if (num[j] > num[j + 1]) {
//					temp = num[j];
//					num[j] = num[j + 1];
//					num[j + 1] = temp;
//				}
//			}
//		}
//		printf("%d\n", num[b]);
//	}
//}