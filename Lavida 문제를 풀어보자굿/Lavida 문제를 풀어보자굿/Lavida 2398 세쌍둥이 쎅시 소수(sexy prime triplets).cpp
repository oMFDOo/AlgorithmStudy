///// 2398 ¼¼½ÖµÕÀÌ ›®½Ã ¼Ò¼ö(sexy prime triplets)
//#include <stdio.h>
//#include <math.h>
//#pragma warning (disable : 4996)
//
//const int LIMIT = 5000001;
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
//	int TC;
//	scanf("%d", &TC);
//	while (TC--) {
//		int start, end, turn = 1;
//		int x = 0, y = 0, z = 0;
//		scanf("%d %d", &start, &end);
//
//		if (start > end) {
//			int temp = start;
//			start = end;
//			end = temp;
//		}
//
//		for (int i = start; i <= end - 12; i++) {
//			if (b[i] == 0 && b[i + 6] == 0 && b[i + 12] == 0) {
//				x = i;
//				y = i + 6;
//				z = i + 12;
//				printf("%d: %d-%d-%d\n", turn, x, y, z);
//				turn++;
//			}
//		}
//
//		if (x == 0 && y == 0 && z == 0) {
//			printf("No Sexy Prime Triplets!\n");
//		}
//	}
//}