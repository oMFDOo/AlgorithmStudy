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
//		for (q = 0; q < 7; q++) {			// ��÷��ȣ ��ĵ
//			scanf("%d", &win[q]);
//		}
//
//		int per, pNum[6], cnt = 0;
//		int st = 0, nd = 0, rd = 0, th = 0;	// 1��, 2��, 3��, 4�� ��÷��
//		scanf("%d", &per);
//		for (int i = 0; i < per; i++) {		// �ζ� �� ��� �� ��ŭ �ݺ�
//			for (int j = 0; j < 6; j++) {	// �ζ� ��ȣ ��ĵ
//				scanf("%d", &pNum[j]);
//			}
//			cnt = 0;
//			for (int j = 0; j < 6; j++) {	// ��÷ ���� �ǵ�
//				for (int l = 0; l < 6; l++) {
//					if (win[j] == pNum[l]) {
//						cnt++;					// ���� ��ȣ ������ ��� ����
//						//printf("�� �� �۵�? %d %d cnt : %d \n", win[j], pNum[l], cnt);
//					}
//				}
//			}
//			
//			if (cnt > 5) {					// ����� ��÷�� �� �ǵ�
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
//		int stM = 0, ndM = 0, rdM = 0, thM = 0;		// �� ��÷�� ���
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