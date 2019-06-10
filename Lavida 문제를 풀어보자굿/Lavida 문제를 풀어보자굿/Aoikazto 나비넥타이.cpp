//#include <stdio.h>
//#pragma warning (disable : 4996)
//
//int main() {
//	int TC;
//	scanf("%d", &TC);
//	while (TC--) {
//		int S;
//		scanf("%d", &S);
//		if (S%2==0) {
//			S++;
//		}
//		for (int y = 0; y < S; y++) {
//			for (int x = 0; x < S; x++) {
//				if (((x < S-y-1) && (y < x)) && (y < S/2)) {
//					printf(" ");
//				}
//				else if (((x < y) && (S-y-1 < x)) && (y > S/2)) {
//					printf(" ");
//				}
//				else {
//					printf("*");
//				}
//			}
//			printf("\n");
//		}
//	}
//}