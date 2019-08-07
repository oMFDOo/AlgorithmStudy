//#include <cstdio>
//#include <iostream>
//#include <cstring>
//#include <string>
//#include <cmath>
//#include <climits>
//using namespace std;
//
//int balance(char _string[]) {
//	int big = 0, small = 0;
//	int trueOrFalse = 1;
//	char extraction[101];
//
//	/*
//	
//	<슬기로운 괄호 생활>
//	1.괄호만 뽑아서 배열에 넣어
//		ㄱr. (나 [나오면 그냥 넣어줘
//		ㄴr. )나 ]나오면 삭제해 그런데 이 때
//			- 종족이 달라
//			- -가 되어버렷
//
//	*/
//
//	/* 괄호 추출및 탐색....?하기! */
//	int temp = 0;
//	for (int i = 0; i < strlen(_string); i++) {
//
//		// 추가
//		if(_string[i] == '['){
//			big++;
//			extraction[temp++] = _string[i];
//		}
//		if (_string[i] == '(') {
//			small++;
//			extraction[temp++] = _string[i];
//		}
//
//		// 삭제
//		if (_string[i] == ']') {
//			big--;
//			if (big < 0 || extraction[temp - 1] != '[') {
//				trueOrFalse = 0;
//				return trueOrFalse;
//			}
//			temp--;
//		}
//		if (_string[i] == ')') {
//			small--;
//			if (small < 0 || extraction[temp - 1] != '(') {
//				trueOrFalse = 0;
//				return trueOrFalse;
//			}
//			temp--;
//		}
//	}
//	if (big || small) {
//		trueOrFalse = 0;
//	}
//	return trueOrFalse;
//}
//
//int main() {
//	while (1) {
//		int result;
//		char _string[101];
//		cin.getline(_string, 101, '\n');
//		if (_string[0] == '.' && strlen(_string) == 1) {
//			return 0;
//		}
//		result = balance(_string);
//		if (result) {
//			cout << "yes\n";
//		}
//		else {
//			cout << "no\n";
//		}
//	}
//}