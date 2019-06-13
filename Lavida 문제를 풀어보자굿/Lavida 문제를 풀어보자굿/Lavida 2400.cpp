//#include <stdio.h>
//#include <string.h>
//#pragma warning (disable : 4996)
//
//int main() {
//	int TC;
//	scanf("%d", &TC);
//	while (TC--) {
//		char text[1005], vowel[6] = {'a', 'e', 'i', 'o', 'u', 0};
//		int VowelCnt = 0, DAP = 1, len;
//
//		scanf("%s", &text[0]);
//
//		len = strlen(text);
//
//		for (int i = 0; i <= len; i++) {
//			if (text[i]=='a' || text[i]=='e' || text[i]=='i' || text[i]=='o' || text[i]=='u') {
//				VowelCnt++;
//			}
//			if ((i < len / 2) && (text[i] != text[len - i - 1])) {
//				DAP = 0;
//			}
//		}
//		if (DAP) {
//			printf("Same %d\n", VowelCnt);
//		}
//		else {
//			printf("Not_Same %d\n", VowelCnt);
//		}
//	}
//}