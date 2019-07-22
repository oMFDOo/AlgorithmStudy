//#include <stdio.h>
//#pragma warning (disable : 4996)
//
//int main() {
//	int sum = 0;
//		printf("======================\n");
//		printf("입금\t출금\t잔고\n");
//		printf("======================\n");
//	while (1) {
//		int money = 1, GG = 0;
//		while (1) {
//			fflush(stdin);
//			if (scanf("%d", &money) == 1) {
//				sum += money;
//				break;
//			}
//			else {
//				GG = 1;
//				break;
//			}
//		}
//		if (GG) {
//			printf("======================\n");
//			return 0;
//		}
//		if (money > 0) {
//			printf("%d\t\t%d\n", money, sum);
//		}
//		if (money < 0) {
//			printf("\t%d\t%d\n", money*-1, sum);
//		}
//	}
//}