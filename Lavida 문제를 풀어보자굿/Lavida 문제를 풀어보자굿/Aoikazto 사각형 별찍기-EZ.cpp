//#include <stdio.h>
//#pragma warning (disable : 4996)
//
//int main() {
//
//	int testCase;
//	scanf("%d", &testCase);
//	while (testCase--) {
//		int size, hihi = 1;
//		scanf("%d", &size);
//
//		for (int y = 0; y < size; y++) {
//			for (int x = 0; x < size; x++) {
//				if (x >= y && x < size - y) {
//					if (size % 2 == 1) {
//						if (size % 2 != y % 2)
//							printf("*");
//						else
//							printf(" ");
//					}
//					else {
//						if (size % 2 == y % 2)
//							printf("*");
//						else
//							printf(" ");
//					}
//				}
//				else if (x <= size / 2 && x < size - y) {
//					if (size % 2 == 1) {
//						if (size % 2 != x % 2)
//							printf("*");
//						else
//							printf(" ");
//					}
//					else {
//						if (size % 2 == x % 2)
//							printf("*");
//						else
//							printf(" ");
//					}
//				}
//				else if (x < y) {
//					if (size % 2 == 1) {
//						if (size % 2 != y % 2)
//							printf("*");
//						else
//							printf(" ");
//					}
//					else {
//						if (size % 2 == y % 2)
//							printf(" ");
//						else
//							printf("*");
//					}
//				}
//				else {
//					if (size % 2 == 1) {
//						if (size % 2 != x % 2)
//							printf("*");
//						else
//							printf(" ");
//					}
//					else {
//						if (size % 2 == x % 2)
//							printf(" ");
//						else
//							printf("*");
//					}
//				}
//			}
//			printf("\n");
//		}
//		printf("\n");
//	}
//}