//#include <stdio.h>
//#pragma warning (disable : 4996)
//
//int main() {
//	int TC;
//	scanf("%d", &TC);
//	while (TC--) {
//		int SaRam[7] = {0}, sum = 0, temp, cnt = 0;
//		for (int i = 0; i < 7; i++) {
//			scanf("%d", &SaRam[i]);
//			sum += SaRam[i];
//		}
//
//		for (int i = 0; i < 7; i++) {			//  ���� ���� �����ϴ� ����
//			for (int j = 0; j+1 < 7-i; j++) {	// ��				     ��
//				if (SaRam[j] > SaRam[j+1]) {	// ��		 ^)^ 	     ��
//					temp = SaRam[j];			// ��		  V 	     ��
//					SaRam[j] = SaRam[j+1];		// ��				     ��
//					SaRam[j+1] = temp;			// �ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١�
//				}
//			}
//		}
//
//		if (SaRam[1] - SaRam[5] > 4) {
//			sum -= SaRam[0] + SaRam[1] + SaRam[5] + SaRam[6];
//			printf("%d\n", sum/3);
//		}
//		else {
//			sum -= SaRam[0] + SaRam[6];
//			printf("%d\n", sum/5);
//		}
//	}
//}