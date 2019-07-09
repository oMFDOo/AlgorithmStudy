//#include <stdio.h>
//#include <string.h>
//#pragma warning (disable : 4996)
//
//int main() {
//	int TC;
//	scanf("%d", &TC);
//	while (TC--) {
//
//		char a[1001], b[1001], c[1001] = {0}, temp;
//		int lenA, lenB, cnt = 0, T=1;
//		scanf("%s\n%s", a, b);
//		lenA = strlen(a);
//		lenB = strlen(b);
//		for (int A = 0; A < lenA; A++) {
//			T = 1;
//			for (int B = 0; B < lenB; B++) {
//				if (a[A] - b[B] == 0) {
//					for (int i = 0; i < cnt; i++) {
//						if (c[i] == b[B]) {
//							T = 0;
//						}
//					}
//					if (T) {
//						c[cnt] = b[B];
//						cnt++;
//					}
//				}
//			}
//		}
//		for (int i = 0; i < cnt; i++) { 
//			for (int j = 0; j + 1 < cnt - i; j++) { 
//				if (c[j] > c[j + 1]) {
//					temp = c[j];
//					c[j] = c[j + 1];
//					c[j + 1] = temp;
//				}
//			}
//		}
//		printf("%s\n", c);
//	}
//}