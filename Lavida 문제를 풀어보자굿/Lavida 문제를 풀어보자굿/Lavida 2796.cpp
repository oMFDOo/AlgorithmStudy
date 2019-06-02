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
//		for (int i = 0; i < 7; i++) {			//  ¸ÚÂð ³»°¡ Á¤·ÄÇÏ´Â ±¸°£
//			for (int j = 0; j+1 < 7-i; j++) {	// ¡Ú				     ¡Ú
//				if (SaRam[j] > SaRam[j+1]) {	// ¡Ù		 ^)^ 	     ¡Ù
//					temp = SaRam[j];			// ¡Ú		  V 	     ¡Ú
//					SaRam[j] = SaRam[j+1];		// ¡Ù				     ¡Ù
//					SaRam[j+1] = temp;			// ¡Ú¡Ù¡Ú¡Ù¡Ú¡Ù¡Ú¡Ù¡Ú¡Ù¡Ú¡Ù¡Ú
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