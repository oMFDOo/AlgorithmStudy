//#include <iostream>
//#include <string.h>
//#include <string>
//#include <math.h>
//#include <limits.h>
//using namespace std;
//
//char reverce(const char rArr) {
//	switch (rArr) {
//	case '-':
//		return '|';
//	case '|':
//		return '-';
//	case '/':
//		return 92;
//	case 92 :
//		return '/';
//	case '^':
//		return '<';
//	case '<':
//		return 'v';
//	case 'v':
//		return '>';
//	case '>':
//		return '^';
//	default :
//		return rArr;
//	}
//}
//
//int main() {
//	int x, y;
//	char initialArray[101][101];
//
//	cin >> y >> x;
//	for (int i = 0; i < y; i++) {
//		for (int j = 0; j < x; j++) {
//			cin >> initialArray[i][j];
//		}
//	}
//	for (int i = x-1; i >= 0; i--) {
//		for (int j = 0; j < y; j++) {
//			initialArray[j][i] = reverce(initialArray[j][i]);
//			cout << initialArray[j][i];
//		}
//		cout << endl;
//	}
//}