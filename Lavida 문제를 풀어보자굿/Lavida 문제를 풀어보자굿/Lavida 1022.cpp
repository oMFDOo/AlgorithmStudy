//#include <stdio.h>
//#pragma warning (disable : 4996)
//
//int main() {
//	int TC;
//	scanf("%d", &TC);
//	while (TC--) {
//		int size;
//		scanf("%d", &size);
//
//		for (int y = 0; y < size; y++) {
//			for (int x = 0; x < size - y -1; x++) {
//				printf(" ");
//			}
//			int width = y*2+1;
//			for (int x = 0; x < y*2+1; x++) {
//				if (x < (width / 2)) {
//					printf("%d", 1 + x);
//				}
//				else {
//					printf("%d", width - x);
//				}
//			}
//			printf("\n");
//		}
//		for (int y = 0; y < size-1; y++) {
//			for (int x = 0; x <= y; x++) {
//				printf(" ");
//			}
//			for (int x = 0; x < (size - y) * 2 -3; x++) {
//				if (x < ((size-y) * 2 -1)/2) {
//					printf("%d", 1 + x);
//				}
//				else {
//					printf("%d", (size-y)*2-3-x);
//				}
//				
//			}
//			printf("\n");
//		}
//	}
//}