//#include <stdio.h>
//#pragma warning (disable : 4996)
//
//int main(){
//
//	int testCase;
//	scanf("%d", &testCase);
//
//	while (testCase--) {
//
//		int win[7], q;
//		for (q = 0; q < 7; q++) {			// 당첨번호 스캔
//			scanf("%d", &win[q]);
//		}
//
//		int per, pNum[6], cnt = 0;
//		int st = 0, nd = 0, rd = 0, th = 0;	// 1등, 2등, 3등, 4등 당첨자
//		scanf("%d", &per);
//		for (int i = 0; i < per; i++) {		// 로또 산 사람 수 만큼 반복
//			for (int j = 0; j < 6; j++) {	// 로또 번호 스캔
//				scanf("%d", &pNum[j]);
//			}
//			cnt = 0;
//			for (int j = 0; j < 6; j++) {	// 당첨 여부 판독
//				for (int l = 0; l < 6; l++) {
//					if (win[j] == pNum[l]) {
//						cnt++;					// 같은 번호 갯수로 등수 판정
//						//printf("왜 다 작동? %d %d cnt : %d \n", win[j], pNum[l], cnt);
//					}
//				}
//			}
//			
//			if (cnt > 5) {					// 등수별 당첨자 수 판독
//				st++;
//			}
//			else if (cnt > 4) {
//				nd++;
//			}
//			else if (cnt > 3) {
//				rd++;
//			}
//			else if (cnt > 2) {
//				th++;
//			}
//		}
//		int stM = 0, ndM = 0, rdM = 0, thM = 0;		// 각 당첨금 계산
//		if(st != 0)
//			stM = (win[6] / 100 * 50) / st;
//		if (nd != 0)
//			ndM = (win[6] / 100 * 25) / nd;
//		if (rd != 0)
//			rdM = (win[6] / 100 * 15) / rd;
//		if (th != 0)
//			thM = (win[6] / 100 * 5) / th;
//		printf("%d %d %d %d %d %d %d %d\n", st, stM, nd, ndM, rd, rdM, th, thM);
//
//	}
//
//}