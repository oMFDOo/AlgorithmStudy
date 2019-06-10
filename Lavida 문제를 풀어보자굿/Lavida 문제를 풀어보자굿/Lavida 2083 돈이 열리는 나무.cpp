//#include <stdio.h>
//#pragma warning (disable : 4996)
//
//int main() {
//	int TC;
//	scanf("%d", &TC);
//	while (TC--) {
//		double size;
//		int c = 1;
//		scanf("%lf", &size);
//		for (int y = 0; y < size; y++) {
//			for (int x = 0; x < size - y - 1; x++) {
//				printf(" ");
//			}
//			for (int x = 0; x < y * 2 + 1; x++) {
//				if (x < (y * 2 + 1) / 2+1) {
//					printf("%.lf", size-x);
//					c = 1;
//				}
//				else {
//					printf("%.lf", size-y+c);
//					c++;
//				}
//			}
//			printf("\n");
//		}
//		for (int y = 0; y < size-1; y++) {
//			for (int x = 0; x < y+1; x++) {
//				printf(" ");
//			}
//			for (int x = 0; x < (size-y) * 2 - 3; x++) {
//				if (x < ((size - y) * 2 - 3) / 2) {
//					printf("%.lf", size - x);
//					c = 3;
//				}
//				else {
//					printf("%d", y+c);
//					c++;
//				}
//			}
//			printf("\n");
//		}
//	}
//}