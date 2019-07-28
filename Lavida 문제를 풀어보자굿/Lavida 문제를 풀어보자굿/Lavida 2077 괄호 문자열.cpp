//#include <iostream>
//#include <string>
//#include <cstring>
//# define PUSH 1
//# define POP -1
//using namespace std;
//
//
//int pushOrPop(char _bracket[]) {
//	int len = strlen(_bracket);
//	int resultSum = 0, VPS = 1;
//	for (int i = 0; i < len; i++) {
//		if (_bracket[i] == '(') {
//			resultSum += PUSH;
//		}
//		else if (_bracket[i] == ')') {
//			resultSum += POP;
//		}
//
//		if (resultSum < 0) {
//			VPS = 0;
//			break;
//		}
//	}
//	if (resultSum != 0) {
//		VPS = 0;
//	}
//	return VPS;
//}
//
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int TC;
//	cin >> TC;
//	while (TC--) {
//		char Bracket[55];
//		cin >> Bracket;
//
//		if (pushOrPop(Bracket)) {
//			cout << "YES\n";
//		}
//		else {
//			cout << "NO\n";
//		}
//	}
//}
//
///*
//
//<맞는 경우의 공통점>
//	1. (갯수와 )갯수가 같다.
//	2. )가 나오기 전까지 (의 갯수와 (가 나오기 전까지)갯수가 같다.
//	3. 문자열의 길이가 짝수이다.
//
//<어떻게 할까>
//
//	공통점 2번을 활용하자 :
//	- 문자열을 입력받는다
//	- (을 push )을 pop라고 생각하자
//	- 그냥 덧셈 뺄셈 하자
//		( : 1
//		) : -1
//		값이 0이하가 || 결과 값이 0이 아니면 false
//		else true
//
//*/