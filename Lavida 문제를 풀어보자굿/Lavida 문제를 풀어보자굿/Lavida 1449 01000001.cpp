//#include <stdio.h>
//#include <string.h>
//#pragma warning (disable : 4996)
//
//int main() {
//	int TC;
//	scanf("%d", &TC);
//	while (TC--) {
//		char BinaryNumber1[100] = { 0 }, BinaryNumber2[100] = { 0 }, Result[100] = { 0 };
//		char ChangeNumber1[100] = { 0 }, ChangeNumber2[100] = { 0 };
//		scanf("%s %s", BinaryNumber1, BinaryNumber2);
//
//
//
//		int ZeroCount, RoundUp = 0, Len1 = strlen(BinaryNumber1), Len2 = strlen(BinaryNumber2);
//
//		if (Len1 < Len2) {
//			int Temp = Len2;
//			Len2 = Len1;
//			Len1 = Temp;
//		}
//
//		for (int i = Len1 - 1; i >= 0; i--) {
//			ZeroCount = 0;
//			if (BinaryNumber1[i] == '0') {
//				ZeroCount++;
//			}
//			if (BinaryNumber2[i] == '0') {
//				ZeroCount++;
//			}
//			if (ZeroCount % 2) {
//				if (RoundUp == 1) {
//					Result[i] = '0';
//					printf("*1*\n");
//				}
//				else if (RoundUp == 0) {
//					Result[i] = '1';
//					RoundUp = 0;
//					printf("*2*\n");
//				}
//				if (ZeroCount / 2 == 1) {
//					RoundUp = 1;
//					printf("*3*\n");
//				}
//				else if (ZeroCount / 2 == 0) {
//					RoundUp = 0;
//					printf("*4*\n");
//				}
//			}
//			else {
//				if (RoundUp == 1) {
//					Result[i] = '1';
//					printf("*5*\n");
//				}
//				else if (RoundUp == 0) {
//					Result[i] = '0';
//					printf("*6*\n");
//				}
//				if (ZeroCount / 2 == 1) {
//					RoundUp = 1;
//					printf("*7*\n");
//				}
//				else if (ZeroCount / 2 == 0) {
//					RoundUp = 0;
//					printf("*8*\n");
//				}
//			}
//			printf("¿©±â : %d %d\n", RoundUp, ZeroCount);
//		}
//		for (int i = strlen(BinaryNumber1)-1; i >= 0; i--) {
//			printf("%c", Result[i]);
//		}
//		printf("\n");
//	}
//}