//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//#pragma warning (disable : 4996)
//
//int i, Cnt = 0;
//double MAX = 0;
//
//double MaxPont(double Data) {
//	if (MAX < Data) {
//		MAX = Data;
//		Cnt = i+1;
//	}
//	return Cnt;
//}
//double HMIdealType(int H, int W) {
//	double LovePoint;
//	LovePoint = 100 - (abs(H - 160) + fabs(22 - (double)W * 10000 / (H * H)) * 4);
//	return MaxPont(LovePoint);
//}
//int main() {
//	int TC;
//	scanf("%d", &TC);
//	while (TC--) {
//		int Height, Weight, NNum, MNum;
//		MAX = 0;
//		for (i = 0; i < 3; i++) {
//			scanf("%d %d", &Height, &Weight);
//			NNum = HMIdealType(Height, Weight);
//		}
//		MAX = 0;
//		for (i = 0; i < 3; i++) {
//			scanf("%d %d", &Height, &Weight);
//			MNum = HMIdealType(Height, Weight);
//		}
//		printf("%d %d\n", NNum, MNum);
//	}
//}
