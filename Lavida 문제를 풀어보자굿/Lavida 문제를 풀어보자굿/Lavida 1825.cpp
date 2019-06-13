//#include <stdio.h>
//#include <string.h>
//#pragma warning (disable : 4996)
//
//int main() {
//	int TC;
//	scanf("%d", &TC);
//	while (TC--) {
//		char num[55];
//		int K, len, result = 0;
//		scanf("%s %d", &num[0], &K);
//		len = strlen(num);
//		for (int i = 0; i < 9; i++) {
//			if (K < num[len - 1] - '0') {
//				result += 10 - (num[len - 1] - '0');
//				num[len - 1] = '0';
//			}
//			if (K == num[len - 1] - '0' + i) {
//				result += i;
//			}
//		}
//		printf("%d\n", result);
//	}
//}