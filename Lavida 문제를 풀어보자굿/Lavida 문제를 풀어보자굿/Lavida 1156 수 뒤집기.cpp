//#include <stdio.h>
//#pragma warning (disable : 4996)
//
//int main() {
//	int TC;
//
//	scanf("%d", &TC);
//
//	while (TC--) {
//
//		int num, rvs = 0, oNum, T[50], cnt = 0;
//		scanf("%d", &num);
//
//		oNum = num;
//		while (num) {
//			rvs = (rvs * 10) + (num % 10);
//			num = num / 10;
//		}
//		oNum += rvs;
//		while (oNum) {
//			T[cnt] = oNum % 10;
//			oNum /= 10;
//			cnt++;
//		}
//		for (int i = 0; i < cnt / 2; i++) {
//			if (T[i] != T[cnt - i-1]) {
//				cnt = 0;
//				break;
//			}
//		}
//		if (cnt == 0) {
//			printf("NO\n");
//		}
//		else {
//			printf("YES\n");
//		}
//
//	}
//}