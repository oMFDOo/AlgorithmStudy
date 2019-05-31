#include <stdio.h>
#pragma warning (disable : 4996)

//int main() {
//	int TC;
//	scanf("%d", &TC);
//	while (TC--) {
//		int price, save, sub, day = 0, MF;
//		scanf("%d %d", &price, &save);
//		sub = price - save;
//		MF = sub % 217000;
//		if (sub > 0) {
//			day += (sub / 217000) * 7;
//			if ( MF > 105000) {
//				if (MF > 161000) {
//					day++;
//				}
//				day += 6;
//			}
//			else {
//				if (MF != 0) {
//					day++;
//				}
//				day += (MF) / 21000;
//			}
//		}
//		printf("%d\n", day);
//	}
//}

int main() {
	int TC;
	scanf("%d", &TC);
	while (TC--){
		int price, save, sub, day = 0;
		scanf("%d %d", &price, &save);
		sub = price - save;
		while (1) {
			if (sub <= 0)
				break;
			for (int i = 0; i < 5 && sub > 0; i++) {
				sub -= 21000;
				day++;
			}
			if (sub <= 0)
				break;
			for (int i = 0; i < 2 && sub > 0; i++) {
				sub -= 56000;
				day++;
			}
			if (sub <= 0)
				break;
		}
		printf("%d\n", day);
		
	}
}