//#include <stdio.h>
//#pragma warning (disable : 4996)
//
//int main() {
//	int tC;
//	scanf("%d", &tC);
//	while(tC--) {
//		int S, T;
//		scanf("%d %d", &S, &T);
//		if (S % 2 != 0) {
//			S++;
//		}
//		if (T > S / 2) {
//			printf("No DAP!\n");
//		}
//		else {
//			for (int i = 0; i < S; i++) {
//				int c = 0;
//				for (int j = 0; j < i; j++) {
//					printf(" ");
//				}
//				for (int j = 0; j < (S-i)*2-1; j++) {
//					if (j > (S - i) * 2 - 2 - T || j < T ||i<T) {
//						if (j <= ((S - i) * 2 - 1) / 2) {
//							printf("%c", 'A' + (((S - i) * 2 - 1) / 2 - j));
//						}
//						else {
//							printf("%c", 'A' + j - ((S-i)*2-1)/2);
//						}
//						
//					}
//					else {
//						printf(" ");
//					}
//				}
//				printf("\n");
//			}
//			printf("\n");
//		}
//	}
//}