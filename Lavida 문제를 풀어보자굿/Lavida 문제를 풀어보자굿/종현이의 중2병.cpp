//#include <stdio.h>
//#pragma warning(disable:4996)
//int main()
//{
//	int TC;
//	scanf("%d", &TC);
//	while (TC--) {
//		int size;
//		scanf("%d", &size);
//		if (size % 2 == 0) {
//			size++;
//		}
//		for (int y = 0; y < size; y++) {
//			int x;
//			for (x = 0; x < size; x++) {
//				if ((x<1 || x>size - 2) || (y<1 || y>size - 2)) {
//					printf("*");
//				}
//				else if ((x == size / 2 - y || x == size / 2 + y) && y < size / 2) {
//					printf("*");
//				}
//				else if ((x == y - size / 2 || x == size - (y - size / 2) - 1) && y > size / 2) {
//					printf("*");
//				}
//				else {
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//}