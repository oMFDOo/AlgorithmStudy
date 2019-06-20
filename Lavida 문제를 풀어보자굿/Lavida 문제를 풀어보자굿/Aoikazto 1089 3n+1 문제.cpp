//#include <stdio.h>
//#include <limits.h>
//#pragma warning (disable : 4996)
//
//int main() {
//	int TC;
//	scanf("%d", &TC);
//	while (TC--) {
//		int i, j, cnt_M = 1, min = INT_MAX, max = 0;
//		scanf("%d %d", &i, &j);
//		if (i > j) {
//			int temp = i;
//			i = j;
//			j = temp;
//		}
//		for (int t = i; t <= j; t++) {
//			cnt_M = 1;
//			int num = t;
//			while (num != 1) {
//				if (num % 2 == 1) {
//					num = 3*num+1;
//					cnt_M++;
//				}
//				else {
//					num /= 2;
//					cnt_M++;
//				}
//			}
//			if (min > cnt_M) {
//				min = cnt_M;
//			}
//			if (max < cnt_M) {
//				max = cnt_M;
//			}
//		}
//		printf("%d %d\n", max, min);
//	}
//}