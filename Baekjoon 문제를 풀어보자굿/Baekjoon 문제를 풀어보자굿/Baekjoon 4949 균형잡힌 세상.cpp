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
//	<����ο� ��ȣ ��Ȱ>
//	1.��ȣ�� �̾Ƽ� �迭�� �־�
//		��r. (�� [������ �׳� �־���
//		��r. )�� ]������ ������ �׷��� �� ��
//			- ������ �޶�
//			- -�� �Ǿ����
//
//	*/
//
//	/* ��ȣ ����� Ž��....?�ϱ�! */
//	int temp = 0;
//	for (int i = 0; i < strlen(_string); i++) {
//
//		// �߰�
//		if(_string[i] == '['){
//			big++;
//			extraction[temp++] = _string[i];
//		}
//		if (_string[i] == '(') {
//			small++;
//			extraction[temp++] = _string[i];
//		}
//
//		// ����
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