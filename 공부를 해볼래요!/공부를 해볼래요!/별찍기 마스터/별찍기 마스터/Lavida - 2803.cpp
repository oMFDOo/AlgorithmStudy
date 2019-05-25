//#include <stdio.h>
//#pragma warning (disable : 4996)
//
//int main() {
//
//	int testCase;
//	scanf("%d", &testCase);
//	while (testCase--) {
//		char Al[9] = { 'A', 'B', 'C', 'G', 'J', 'L', 'M', 'P', 'T' };
//
//		int size;
//		scanf("%d", &size);
//
//		for (int y = 0; y < size; y++) {
//			for (int x = 0; x < size; x++) {
//				if (x >= y && x < size - y) {
//					printf("%c", Al[y]);
//				}
//
//				else if (x <= size / 2 && x < size - y) {
//					printf("%c", Al[x]);
//				}
//				else if (x < y) {
//					printf("%c", Al[size - y - 1]);
//
//				}
//				else {
//					printf("%c", Al[size - x - 1]);
//				}
//			}
//			printf("\n");
//		}
//		printf("\n");
//	}
//}