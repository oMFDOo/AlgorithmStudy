//#include <stdio.h>
//#pragma warning (disable : 4996)
//
//int main() {
//	while (1) {
//		int a, ai, b, bi;
//
//		scanf("%d %d %d %d", &a, &ai, &b, &bi);
//		if (a == 0 && ai == 0 && b == 0 && bi == 0) {
//			break;
//		}
//
//		int sum = 0, sumi = 0;
//
//		sum = a * b - ai * bi;			// �Ǽ��� ���
//		sumi = a * bi + ai * b;			// ����� ���
//
//		if (sumi != 0 && sum == 0) {	// ����θ� ����
//			printf("Imaginary\n");
//		}
//		if (sumi != 0 && sum != 0) {	// �� ��� ����
//			printf("Complex\n");
//		}
//		if ((sumi == 0 && sum != 0) || (sum == 0 && sumi == 0)) {	// �Ǽ��θ� ����
//			printf("Real\n");
//		}
//	}
//}