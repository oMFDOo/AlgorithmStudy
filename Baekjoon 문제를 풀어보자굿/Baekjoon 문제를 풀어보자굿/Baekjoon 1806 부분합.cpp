//#include <stdio.h>
//#include <limits.h>
//#pragma warning (disable : 4996)
//
///*
//
//1. 배열, 배열 사이즈, 최소로 넘어야 하는 값
//
//	int 최소길이 = INT_MAX, 합, 결과 = 0
//
//	반복문 (for a ~ size)
//		합 = 0
//		반복문(for b = a ~ size)
//			합 += 배열[b]
//		if ( 최솟값보다 크고 / 최소 길이보다 짧을 때 )
//			최소길이 = b값 - a값
//			결과 = 최소길이
//	return 결과
//
//	/////////////////////함수/////////////////////////
//
//int find_min_length (int box[], int len, int min) {
//	int min_length = INT_MAX, result = 0;
//
//	for (int i = 0; i < len; i++) {
//		int sum = 0;
//		for (int j = i; j < len; j++) {
//			sum += box[j];
//
//			if (min <= sum && min_length >= j - i + 1) {
//				printf("sum : %d j : %d i : %d\n", sum, j, i);
//				min_length = j - i + 1;
//				result = j - i + 1;
//			}
//		}
//	}
//	return result;
//}
//
//*/
//
//
///*
//
//	int 최소길이 = INT_MAX, 합
//
//	반복문 (for a ~ size)
//		합 = 0
//		반복문(for b = a ~ size)
//			합 += 배열[b]
//			if ( 최솟값보다 크고 / 최소 길이보다 짧을 때 )
//				최소길이 = b값 - a값
//			if (최소길이 >= b - a)
//				와장창
//	return 최소길이 == INT MAX ? 0 : 최소길이
//
//	- 최소길이를 계속 업데이트 해주자
//	- 최소길이보다 길어지게 탐색하면 포문을 끊어버리자
//
//*/
//
///*
//
//	- 0부터 사이즈까지 돈다.
//		- 입력받는 김에 처음부터 더한 값을 차근차근 배열에 넣는다.
//
//	- 조건을 충족하는 배열 인덱스를 찾는다.
//		- 찾았다!
//			- 0번 인덱스부터 값을 빼어본다.
//			- 조건을 만족하는 길이를 구한다. (인덱스의 차)
//			- 최소 길이를 저장한다(그 이프문으로 돌리고돌리고 하는 거).
//
//*/
//
//int find_min_length(long long box[], int len, int min) {
//
//	int min_length = INT_MAX;
//	int left = 0, right = 0;
//
//	for (; right < len; right++) {
//		// 최솟값 조건 충족
//		if (box[right] >= min) {
//			for (; left <= right; left++) {
//				/*
//					조건 
//				1. 오른쪽 - 왼쪽이 최소보다 커야한다.
//				2. 길이(right - left + 1)는 최소길이보다 짧아야한다.
//
//
//					결과
//				-> 최소 길이가 업데이트(right - left + 1)된다.
//				-
//				*/
//				if (min_length > right - left + 1) {
//					min_length = right - left + 1;
//				}
//				if ( box[right] - box[left] < min  ) {
//					break;
//				}
//			}
//		}
//	}
//	return min_length == INT_MAX ? 0 : min_length;
//}
//
//
//int main() {
//	int TC;
//	scanf("%d", &TC);
//	while (TC--) {
//		long long num[100000];
//		int size, min_sum, min_length;
//
//		scanf("%d %d %lld", &size, &min_sum, &num[0]);
//		
//		for (int i = 1; i < size; i++) {
//			scanf("%lld", &num[i]);
//			num[i] += num[i-1];
//		}
//
//		min_length = find_min_length(num, size, min_sum);
//
//		printf("%d\n", min_length);
//	}
//}