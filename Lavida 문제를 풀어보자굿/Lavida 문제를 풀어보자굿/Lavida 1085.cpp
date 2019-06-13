//#include <stdio.h>
//#pragma warning (disable : 4996)
//
//int main() {
//	int TC;
//	scanf("%d", &TC);
//	while (TC--) {
//		int turn, num[10], result;
//		scanf("%d", &turn);
//		for (int i = 0; i < turn; i++) {
//			scanf("%d", &num[i]);
//		}
//
//		for (int i = 0; i + 1 < turn; i++) {
//			int some;
//			while (num[i] != 0) {
//				some = num[i +1] % num[i];
//				num[i + 1] = num[i];
//				num[i] = some;
//			}
//			result = num[i + 1];
//		}
//		printf("%d\n", result);
//	}
//}