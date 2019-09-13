//#include <stdio.h>
//#include <math.h>
//#pragma warning (disable : 4996)
//
//const int LIMIT = 1000001;
//bool b[LIMIT] = { 1, 1, 0 };
//
//void Prime4() {
//	int sqrtlimit = (int)sqrt(LIMIT);
//
//	for (int i = 2; i <= sqrtlimit; i++) {
//		if (!b[i]) {
//			for (int j = i * i; j < LIMIT; j = j + i) {
//				b[j] = 1;
//			}
//		}
//	}
//}
//
//int main() {
//	Prime4();
//	while (true) {
//		int num, x = 0, y = 0;
//		scanf("%d", &num);
//		if (num == 0) {
//			break;
//		}
//		for (int i = 3; i <= num / 2; i++) {
//			if (b[i] == 0) {
//				if (b[num - i] == 0) {
//					x = i;
//					y = num - i;
//					break;
//				}
//			}
//		}
//		printf("%d = %d + %d\n", num, x, y);
//		if (x == 0 && y == 0) {
//			printf("Goldbach's conjecture is wrong.\n");
//		}
//		else {
//			
//		}
//	}
//}
