//#include <stdio.h>
//#pragma warning (disable : 4996)
//
//int main()
//{	
//	int TC;
//	scanf("%d", &TC);
//	while (TC--) {
//		int price, save, sub;
//		scanf("%d %d", &price, &save);
//		sub = price - save;
//
//		int dayPrices[] = {
//		3 * 7000,
//		3 * 7000,
//		3 * 7000,
//		3 * 7000,
//		3 * 7000,
//		8 * 7000,
//		8 * 7000,
//		};
//
//		auto day = 0;
//		if (sub > 0) {
//			auto weeks = sub / 217000;
//			auto weekdaySub = sub % 217000;
//
//			auto weekday = 0;
//			while (weekdaySub > 0) {
//				weekdaySub -= dayPrices[weekday];
//				weekday += 1;
//			}
//
//			day += weeks * 7 + weekday;
//		}
//		printf("%d\n", day);
//	}
//}

//int main() {
//    int TC;
//    scanf("%d", &TC);
//    while (TC--) {
//        int price, save, sub, day = 0;
//        scanf("%d %d", &price, &save);
//        sub = price - save;
//        if (sub > 0) {
//            // 일주일 처리
//            day += (sub / 217000) * 7;
//
//            // 남은 돈
//            sub = sub % 217000;
//
//            // 5일 초과로 일 안해도 됩니까?
//            if (sub <= 105000) {
//                day += sub / 21000;
//                sub = sub % 21000;
//
//                // 애매하게 하루 일해야합니까?
//                if (sub > 0) {
//                    day += 1;
//                }
//            }
//            else {
//                // 5일 일했다고 치고
//                sub -= 105000;
//                day += 5;
//
//                // 토일 수당으로 계산 한번 더 들어갑니다.
//                day += sub / 56000;
//                sub = sub % 56000;
//
//                if (sub % 56000 > 0) {
//                    day += 1;
//                }
//            }
//        }
//        printf("%d\n", day);
//    }
//}
//int main() {
//	int TC;
//	scanf("%d", &TC);
//	while (TC--){
//		int price, save, sub, day = 0;
//		scanf("%d %d", &price, &save);
//		sub = price - save;
//		while (1) {
//			if (sub <= 0)
//				break;
//			for (int i = 0; i < 5 && sub > 0; i++) {
//				sub -= 21000;
//				day++;
//			}
//			if (sub <= 0)
//				break;
//			for (int i = 0; i < 2 && sub <= 0; i++) {
//				sub -= 56000;
//				day++;
//			}
//			if (sub <= 0)
//				break;
//		}
//		printf("%d\n", day);
//		
//	}
//}