//#include <iostream>
//#include <string.h>
//#include <math.h>
//#include <limits.h>
//#define FIRST_CHANNEL 100 
//using namespace std;
//
////1. + -버튼만 사용한다.
////- (목표 채널 - 100)의 절댓값
////
////2. 근접한 수를 만들고 부가적으로 + , -버튼을 사용한다.
//
//
///* 현재 채널에 고장난 버튼이 존재하는가 */
//int isBrokenChannel (int _now, int _brokenButton[]) {
//	int trueOrFalse = 1;
//
//	// 0 처리
//	if (_now == 0) {
//		if (_brokenButton[_now % 10] == 1) {
//			trueOrFalse = 0;
//		}
//	}
//	for (; _now > 0 ; _now /= 10) {
//		if (_brokenButton[_now % 10] == 1) {
//			trueOrFalse = 0;
//			break;
//		}
//		if (trueOrFalse == 0) {
//			break;
//		}
//	}
//	return trueOrFalse;
//}
//
///* 채널 문자 길이 계산 */
//int channelLength(int _now) {
//	int cnt = 0;
//
//	// 0 처리
//	if (_now == 0) {
//		cnt = 1;
//	}
//	else {
//		while (_now) {
//			_now /= 10;
//			cnt++;
//		}
//	}
//	return cnt;
//}
//
//int main() {
//	// 입력받은 채널 | 고장난 버튼 갯수 | 고장 버튼 종류 | 채널 길이 
//	int channel, countBrokenButton, brokenButton[10] = { 0 }, length;
//	int min = INT_MAX;
//	
//	cin >> channel >> countBrokenButton;
//
//	for (int i = 0; i < countBrokenButton; i++) {
//		int temp;
//		cin >> temp;
//		brokenButton[temp] = 1;
//	}
//
//	/* 1. (+ , -)버튼만을 이용해서 구하는 채널 이동 */
//	min = abs(channel - FIRST_CHANNEL);
//
//
//	/* 2. 근접한 수를 만들고 부가적으로 + , -버튼을 사용한다. */
//	for (int i = 0; i <= 1000000; i++) {
//		
//		// i. (목표채널 - 현재 채널)의 절댓값 + 채널 길이
//		// ii. 비교
//
//		int temp;
//		if (isBrokenChannel(i, brokenButton)) {
//			length = channelLength(i);
//			temp = abs(channel - i) + length;
//			if (min > temp) {
//				min = temp;
//			}
//		}
//	}
//	cout << min << endl;
//}