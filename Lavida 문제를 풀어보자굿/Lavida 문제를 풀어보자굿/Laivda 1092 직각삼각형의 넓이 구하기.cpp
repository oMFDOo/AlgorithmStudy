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
//		scanf("%d %d %d", &number[0], &number[1], &number[2]); // ���ڰ� �Էµ�
//
//		for (i; i < 3; i++)
//		{
//
//			for (j = i + 1; j < 3; ++j)
//			{
//
//				if (number[i] > number[j])	//  i�� j���� ũ��
//				{
//
//					a = number[i];			// a�� number[i]��� ġ�ڱ�
//					number[i] = number[j];	// number[i]�� j�� ���ϴ°�
//					number[j] = a;			// number[j]�� a�� ���ϸ� ������ ��������?
//
//				}
//
//			}
//
//		}
//
//		x = number[0];		// �̷��� �Ǵ� ���ΰ�
//		y = number[1];
//		z = number[2];
//
//		result = x + y;
//
//		if (result > z) {					// �ﰢ���� ������� ��
//			if (x * x + y * y == z * z) {	// �����ﰢ�� �̸�
//				area = x * y / 2.0;			// ���̸� ���ؼ�
//				printf("%.2lf\n", area);	// �Ҽ��� �ι�°����
//			}
//			else {							// �ﰢ�� but ���� �ﰢ �ƴϸ�
//				printf("-2\n");				// -2 ���
//			}
//		}
//
//		else if (result <= z) {				// �ﰢ���� ��������� ������
//			printf("-1\n");					// -1 ���
//		}
//	}
//	return 0;
//}