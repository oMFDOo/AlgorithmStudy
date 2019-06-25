//#include <stdio.h>
//#pragma warning(disable : 4996)
//
//int main() {
//	int TC;
//	scanf("%d", &TC);
//	while (TC--) {
//		int Height1, Width1, Height2, Width2, NUM, MatrixA[10][10] = { 0 }, T = 1;
//
//		scanf("%d %d", &Height1, &Width1);
//		
//		for (int y = 0; y < Height1; y++) {
//			for (int x = 0; x < Width1; x++) {
//				scanf("%d", &NUM);
//				MatrixA[y][x] = NUM;
//			}
//		}
//
//		scanf("%d %d", &Height2, &Width2);
//
//		for (int y = 0; y < Height2; y++) {
//			for (int x = 0; x < Width2; x++) {
//				scanf("%d", &NUM);
//				MatrixA[y][x] += NUM;
//			}
//		}
//
//		if (Height1 == Height2 && Width1 == Width2) {
//			for (int y = 0; y < Height2; y++) {
//				for (int x = 0; x < Width2; x++) {
//					printf("%d ", MatrixA[y][x]);
//				}
//				printf("\n");
//			}
//		}
//		else {
//			printf("Impossible\n");
//		}
//	}
//}