//#include <stdio.h>
//#pragma warning (disable : 4996)
//
//
//int main(void) {
//	int x, y, z;
//	double result, area;
//	int testcase;
//	scanf("%d", &testcase);
//
//	while (testcase--) {
//
//		int i = 0, j, a, number[30];
//
//
//		scanf("%d %d %d", &number[0], &number[1], &number[2]); // 숫자가 입력됨
//
//		for (i; i < 3; i++)
//		{
//
//			for (j = i + 1; j < 3; ++j)
//			{
//
//				if (number[i] > number[j])	//  i가 j보다 크면
//				{
//
//					a = number[i];			// a가 number[i]라고 치자굿
//					number[i] = number[j];	// number[i]는 j로 변하는겨
//					number[j] = a;			// number[j]가 a로 변하면 앞으로 차곡차곡?
//
//				}
//
//			}
//
//		}
//
//		x = number[0];		// 이래도 되는 것인가
//		y = number[1];
//		z = number[2];
//
//		result = x + y;
//
//		if (result > z) {					// 삼각형이 만들어질 때
//			if (x * x + y * y == z * z) {	// 직각삼각형 이면
//				area = x * y / 2.0;			// 넓이를 구해서
//				printf("%.2lf\n", area);	// 소수점 두번째까지
//			}
//			else {							// 삼각형 but 직각 삼각 아니면
//				printf("-2\n");				// -2 출력
//			}
//		}
//
//		else if (result <= z) {				// 삼각형이 만들어지지 않으면
//			printf("-1\n");					// -1 출력
//		}
//	}
//	return 0;
//}