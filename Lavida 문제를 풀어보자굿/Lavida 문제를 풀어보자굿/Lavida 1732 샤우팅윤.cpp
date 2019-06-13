//#include <stdio.h>
//#pragma warning (disable : 4996)
//
//int main() {
//	int TC, T=1;
//	scanf("%d", &TC);
//	while (TC--) {
//		int s;
//		scanf("%d", &s);
//		printf("Case #%d:\n", T);
//		for (int y = 0; y < s*2-1; y++) {
//			for (int x = 0; x <= y; x++) {
//				if (y < y / 2)
//					printf("*");
//				else
//					if (x < s*2-1-y)
//						printf("*");
//			}
//			printf("\n");
//		}
//		printf("\n");
//		T++;
//	}
//}