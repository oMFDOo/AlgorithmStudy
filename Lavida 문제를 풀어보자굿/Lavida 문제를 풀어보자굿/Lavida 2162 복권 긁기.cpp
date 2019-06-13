//#include <stdio.h>
//#pragma warning (disable : 4996)
//
//int main() {
//	int TC;
//	scanf("%d", &TC);
//	while (TC--) {
//		int LOTTO[7], Num[6], cnt = 0, bonus = 0;
//		for (int i = 0; i < 7; i++) {	// 로또번호 받기
//			scanf("%d", &LOTTO[i]);
//		}
//		for (int i = 0; i < 6; i++) {	// 내 로또 번호
//			scanf("%d", &Num[i]);
//		}
//		for (int i = 0; i < 6; i++) {	// 로또 번호 비교
//			for (int j = 0; j < 6; j++) {
//				if (LOTTO[i] == Num[j]) {
//					cnt++;
//				}
//				if (LOTTO[6] == Num[j]) {
//					bonus = 1;
//				}
//			}
//		}
//		switch (cnt) {
//			case 6: printf("1\n");
//				break;
//			case 5: ;
//				break;
//			case 4: printf("4\n");
//				break;
//			case 3: printf("5\n");
//				break;
//			default : printf("Fail\n");
//				break;
//		}
//		if (cnt == 5) {
//			if (bonus) {
//				printf("2\n");
//			}
//			else {
//				printf("3\n");
//			}
//		}
//	}
//}