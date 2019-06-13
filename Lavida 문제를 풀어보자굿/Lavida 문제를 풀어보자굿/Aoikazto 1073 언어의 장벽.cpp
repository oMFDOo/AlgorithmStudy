//#include <stdio.h>
//#pragma warning (disable : 4996)
//
//int main() {
//	int tC;
//	scanf("%d", &tC);
//	while (tC--) {
//		int S, T;
//		scanf("%d %d", &S, &T);
//		if (S % 2 == 0) {
//			S++;
//		}
//		if (S / 2 < T) {
//			printf("No DAP\n");
//		}
//		else {
//			for (int y = 0; y < S; y++) {
//				for (int x = 0; x < S; x++) {
//					if ((x >= S - T || x < T) || (y < T || y >= S - T)) {
//						if (x < S / 2) {
//							printf("%c", 'A' + S / 2 - x);
//						}
//						else {
//							printf("%c", 'A' - S / 2 + x);
//						}
//					}
//					else {
//						printf("+");
//					}
//				}
//				printf("\n");
//			}
//		}
//	}
//}