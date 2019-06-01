//#include <stdio.h>
//#include <string.h>
//#pragma warning (disable : 4996)
//
//int main() {
//	int TC;
//	scanf("%d", &TC);
//	while (TC--) {
//		char OX[55];
//		int len, index = 0;
//		scanf("%s", &OX[0]);
//		len = strlen(OX);
//		for (int i = 0; i < len; i++) {
//			if (OX[i] == 'o' || OX[i] == 'x') {
//				index = i;
//				break;
//			}
//		}
//		for (int i = index%2 ; i < len; i += 2) {
//			OX[i] = OX[index];
//		}
//		for (int i = (index+1)%2; i < len; i += 2) {
//			if (OX[index] == 'x') {
//				OX[i] = 'o';
//			}
//			else {
//				OX[i] = 'x';
//			}
//		}
//		printf("%s\n", OX);
//	}
//}