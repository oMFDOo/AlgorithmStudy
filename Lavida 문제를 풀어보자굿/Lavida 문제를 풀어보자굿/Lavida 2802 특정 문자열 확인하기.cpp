//#include <stdio.h>
//#include <string.h>
//#pragma warning (disable : 4996)
//
//char ChangedString[130] = {0};
//int cnt = 0, index = 0, T = 0;
//
//int Binary_Transformation(int a) {
//	if (cnt < 8) {
//		T += a << cnt;
//		ChangedString[index] = T;
//		cnt++;
//		if (cnt == 7) {
//		///printf("A : %c\n", ChangedString[index]);
//		}
//	}
//	else {
//		T = 0;
//		cnt = 0;
//		index++;
//		T += a << cnt;
//		ChangedString[index] = T;
//		cnt++;
//	}
//	return T;
//}
//
//int main() {
//	while (1) {
//		char FindWord[6], BinaryNumber[130];
//		int WordLen, BinaryLen;
//
//		scanf("%s %s", FindWord, BinaryNumber);
//
//		if ((FindWord[0] == 'N' && BinaryNumber[0] == 'N')) {
//			if (FindWord[1] == 'U' && BinaryNumber[1] == 'U') {
//				if (FindWord[2] == 'L' && BinaryNumber[2] == 'L') {
//					if (FindWord[3] == 'L' && BinaryNumber[3] == 'L') {
//						break;
//					}
//				}
//			}
//		}
//
//		WordLen = strlen(FindWord);
//		BinaryLen = strlen(BinaryNumber);
//
//		index = 0;
//		T = 0;
//		cnt = 0;
//
//		for (int i = BinaryLen - 1; i > 0; i--) {
//			Binary_Transformation(BinaryNumber[i] - '0');
//		}
//
//		int ChangedStringLen, check = 0, Found = 0;
//		ChangedStringLen = strlen(ChangedString);
//
//		for (int y = ChangedStringLen - 1; y > 0; y--) {
//			int z = y;
//			for (int x = 0; x < WordLen; x++) {
//				///printf("F : %c %c\n", FindWord[x], ChangedString[z]);
//				if (FindWord[x] == ChangedString[z]) {
//					check++;
//					if (check == WordLen) {
//						break;
//					}
//					z--;
//				}
//				else {
//					check = 0;
//					break;
//				}
//			}
//			if (check == WordLen) {
//				break;
//			}
//		}
//		///printf("Len : %d %d\n", check, WordLen);
//		if (check == WordLen) {
//			printf("Found!\n");
//		}
//		else {
//			printf("Not found!\n");
//		}
//	}
//}