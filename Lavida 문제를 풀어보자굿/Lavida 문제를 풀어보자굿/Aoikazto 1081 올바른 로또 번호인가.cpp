//#include <stdio.h>
//#pragma warning (disable : 4996)
//
//int main() {
//	int lotto[6], T = 1, temp;
//	for (int i = 0; i < 6; i++) {
//		scanf("%d", &lotto[i]);
//		if (lotto[i] > 45 || lotto[i] < 1) {
//			T = 2;
//			break;
//		}
//	}
//	for (int i = 0; i < 6; i++) {
//		for (int j = i + 1; j < 6 - i; j++) {
//			if (lotto[i] == lotto[j]) {
//				T = 2;
//			}
//		}
//	}
//	if (T == 1) {
//
//		for (int i = 0; i < 6; i++) {
//			for (int j = 0; j + 1 < 6 - i; j++) {
//				if (lotto[j] > lotto[j + 1]) {
//					temp = lotto[j];
//					lotto[j] = lotto[j + 1];
//					lotto[j + 1] = temp;
//				}
//			}
//		}
//		for (int i = 0; i < 6; i++) {
//			printf("%d ", lotto[i]);
//		}
//		printf("\n");
//	}
//	if (T == 2) {
//		printf("BAD!\n");
//	}
//}