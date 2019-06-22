//#include <stdio.h>
//#include <string.h>
//#pragma warning (disable : 4996)
//
//int main()
//{
//	int TC;
//	scanf("%d", &TC);
//	while (TC--) {
//		char Data[1025] = { 0 }, Keyword[513] = { 0 }, Password[1025] = { 0 };
//		scanf("%s %s", Data, Keyword);
//
//		int LenData, LenPassword, CntLen = 0, TurnCnt = 0;
//
//		LenData = strlen(Data);
//		LenPassword = strlen(Keyword);
//
//		for (int y = 0; y < LenData; y++) {
//			if (strlen(Keyword) != CntLen) {
//				Password[TurnCnt++] = Keyword[CntLen++] ^ Data[y];
//			}
//			else {
//				CntLen = 0;
//				Password[TurnCnt++] = Keyword[CntLen++] ^ Data[y];
//			}
//		}
//		printf("%s\n", Password);
//	}
//}