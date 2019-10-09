//#include <iostream>
//#include <string>
//#include <cstring>
//#include <cmath>
//using namespace std;
//
//int main() {
//	int TC;
//	cin >> TC;
//	while (TC--) {
//		char time[5];
//		cin >> time;
//
//		string type[] = { "*** ", "  * ", "*   ", "* * " };
//		int output[] = { 3330, 11111, 1020, 1010, 33011, 2010, 2030, 1111, 3030, 3010 };
//
//		int div = 10000;
//		int len = strlen(time);
//		for (int i = 0; i < 5; i++) {
//			for (int j = 0; j < len; j++) {
//				int num = time[j] - 48;
//				int temp = 100000 / (int)pow(10, i);
//				int result = ((output[num]) % temp) / div;
//				cout << type[result];
//			}
//			div /= 10;
//			cout << endl;
//		}
//		cout << endl;
//	}
//}