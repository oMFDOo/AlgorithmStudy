//#include <stdio.h>
//#include <string.h>
//#pragma warning (disable : 4996)
//
//int main() {
//	int TC;
//	scanf("%d", &TC);
//	while (TC--) {
//		char num[205], CharTemp;
//		scanf("%s", num);
//
//		int len, CheckOddEven, CalculationNum[205], temp = 0;
//		len = strlen(num);
//		CheckOddEven = (num[len-1]-'0')%2;
//
//		for (int i = 0; i < len; i++) {
//			CharTemp = ((temp * 10) + (num[i] - '0')) / 2;
//			CalculationNum[i] = CharTemp;
//			///printf("Test : %d\n", CalculationNum[i]);
//			temp = ((temp * 10) + (num[i] - '0')) % 2;
//		}
//		if (num[0] == '0') {
//			printf("0\n");
//		}
//		else if (len == 1 && num[0] == '1') {
//			printf("0.5\n");
//		}
//		else {
//			if (CheckOddEven == 1) {		// �汝鶺� 唳辦
//				for (int i = 0; i < len; i++) {
//					if (i == 0 && CalculationNum[i] == 0) {
//					}
//					else {
//						printf("%d", CalculationNum[i]);
//					}
//				}
//				printf(".5\n");
//			}
//			else {							// 礎熱檣 唳辦
//				for (int i = 0; i < len; i++) {
//					if (i == 0 && CalculationNum[i] == 0) {
//					}
//					else {
//						printf("%d", CalculationNum[i]);
//					}
//				}
//				printf("\n");
//			}
//		}
//	}
//}