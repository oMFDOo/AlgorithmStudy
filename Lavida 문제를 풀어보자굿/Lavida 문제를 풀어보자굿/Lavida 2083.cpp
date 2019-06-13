//#include <stdio.h>
//#include <math.h>
//#pragma warning (disable : 4996)
//
//int main() {
//	int TestCase;
//	scanf("%d", &TestCase);
//	while (TestCase--) {
//		double size;
//		scanf("%lf", &size);
//
//		for (int y = 0; y < size*2 -1; y++) {
//			for (int x = 0; x < size-y -1 && y < size; x++) {
//				printf(" ");
//			}
//			for (int x = 0; x < y*2+1 && y < size; x++) {
//				if (x < y*2+1 && y<size) {
//					printf("%d");
//				}
//			}
//			for (int x = 0; x < y - size +1 && y >= size; x++) {
//				printf(" ");
//			}
//			for (int x = 0; x < (size*2-y)*2-3 && y >= size; x++) {
//				printf("%d");
//			}
//			printf("\n");
//		}
//	}
//}