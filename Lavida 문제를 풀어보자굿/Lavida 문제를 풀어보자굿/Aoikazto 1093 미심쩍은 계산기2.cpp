//#include <stdio.h>
//#pragma warning (disable : 4996)
//
//int main() {
//	int TC;
//	scanf("%d", &TC);
//
//	while (TC--) {
//
//		int num1, num2, sum_1 = 0, sum = 0, sum_2 = 0, r_sum = 0, c = 0;
//		scanf("%d %d", &num1, &num2);
//
//		while (num1) {								// 첫번째 숫자 뒤집기
//			sum_1 = (sum_1 * 10) + (num1 % 10);
//			num1 /= 10;
//		}
//		while (num2) {								// 두번째 숫자 뒤집기
//			sum_2 = (sum_2 * 10) + (num2 % 10);
//			num2 /= 10;
//		}
//		sum = sum_1 + sum_2;						// 두 숫자를 더한다.
//		r_sum = 1;									// 한 자리씩 곱하기 위해 초깃값을 1로 둠.
//		if (sum < 100) {							// 만약 두 수의 합이 2자리수면 그대로 출력.
//			printf("%d\n", sum);
//		}
//		else {
//			while (1) {
//				if (sum == 0 && r_sum > 99) {		// 숫자 길이 만큼 나눴지만 값이 2자리 수 초과 이면
//					sum = r_sum;					// 나눠주는 수를 현재 값으로 처리
//					r_sum = 1;
//				}
//				if (sum == 0 && r_sum <= 99) {		// 숫자 길이 만큼 나눴고 2자리 수 이하 이면 (조건충족)
//					break;							// 반복문 탈출
//				}
//				if (sum % 10) {						// 자리수 값이 0이 아닌경우
//					///printf("%d %d\n",r_sum, sum);
//					r_sum *= sum % 10;				// r_sum은 sum의 끝 자리 수를 곱해줌
//					sum /= 10;						// sum을 나눠 줌으로 끝 자리수 삭제
//				}
//				else {								// 자리수 값이 0인 경우
//					///printf("test : %d %d\n",r_sum, sum);
//					sum /= 10;						// 곱하지 않고 건너 뛴다.
//				}
//
//			}
//			printf("%d\n", r_sum);
//		}
//
//	}
//}