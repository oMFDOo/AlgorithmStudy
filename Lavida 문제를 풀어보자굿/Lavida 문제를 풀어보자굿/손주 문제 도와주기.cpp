//#include <string>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//#include <climits>
//
///*
//1. 벡터의 크기를 구한다.
//2. 희망 예산의 총 합을 구한다.
//	- 최소 최대를 같이 구해준다.
//3. 만약에 총 합이 예산보다
//	- 작거나 같다 : 최댓값을 리턴
//	- 총합이 크다 : (최솟값 + 최댓값) / 2를 중앙값으로 잡는다.
//
//4. 벡터의 크기 만큼 돌아가는 for문
//	- 만약에 중앙값보다 현재 값이
//		- 작아 : 벡터에 들어있는 값을 sum에 더해줘
//		- 크거나 같음 : 중앙값을 sum에 더해줘
//
//
//5. 만약 sum이 예산보다
//	- 같다 : 중앙값 리턴
//	- 크다 : 넘어갓
//		- 최대값 = 중앙값
//		- 중앙값 = (최소 + 최대)/2
//	- 작아 : min > (예산 - sum)  이면 min을 바꿔주고 여기서 지금의 중앙값 저장
//		- 최솟값 = 중앙값
//		- 중앙값 = (최소 + 최대)/2
//*/
//
//using namespace std;
////vector<int> ming = { 120, 110, 140, 150 };
////int M = 485;
//
//vector<int> ming = { 120, 110, 140, 150 };
//int M = 4;
//int solution(vector<int> budgets, int M) {
//	int vectorSize = budgets.size();
//	int min = 1, max = 1, middle = 0;
//	long long answer = 0;
//	long long minResult = INT_MAX;
//	long long sum = 0;
//	
//	// 2번 구현
//	for (int i = 0; i < vectorSize; i++) {
//		sum += budgets[i];
//		if (max < budgets[i]) {
//			max = budgets[i];
//		}
//	}
//
//	// 3번 구현
//	if (M >= sum) {
//		return max;
//	}
//	else {
//		middle = (max + min) / 2;
//	}
//
//	
//	while (true) {
//		sum = 0;
//		// 4번 구현
//		for (int i = 0; i < vectorSize; i++) {
//			if (middle > budgets[i]) {
//				sum += budgets[i];
//			}
//			else {
//				sum += middle;
//			}
//		}
//
//		// 5번 구현
//		if (sum == M) {
//			return middle;
//		}
//		else if (sum > M) {
//			max = middle-1;
//			middle = (min + max) / 2;
//		}
//		else if (sum < M) {
//			min = middle+1;
//			if (minResult > (M - sum)) {
//				minResult = M - sum;
//				answer = middle;
//			}
//			middle = (min + max) / 2;
//		}
//
//		if (min > max) {
//			break;
//		}
//	}
//	return answer;
//}
//
//int main() {
//	int result = solution(ming, M);
//	cout << result << endl;
//}