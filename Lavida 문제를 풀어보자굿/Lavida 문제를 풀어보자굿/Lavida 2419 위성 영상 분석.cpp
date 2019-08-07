//#include <iostream>
//#include <algorithm>
//#include <cstring>
//#include <cstdlib>
//#include <cmath>
//using namespace std;
//
//char map[55][55];
//
//int jfsiel(int _i, int _j) {
//	int result = 1;
//	map[_i][_j] = '.';
//	if (map[_i][_j - 1] == '*') {		// аб
//		result += jfsiel(_i, _j - 1);
//	}
//	if (map[_i + 1][_j] == '*') {		// го
//		result += jfsiel(_i + 1, _j);
//	}
//	if (map[_i][_j + 1] == '*') {		// ©Л!
//		result += jfsiel(_i, _j + 1);
//	}
//	if (map[_i - 1][_j] == '*') {		// ╩С
//		result += jfsiel(_i - 1, _j);
//	}
//	return result;
//}
//
//void satelliteNavigation(int _x, int _y) {
//	int cnt = 0, max = 0;
//	for (int i = 1; i <= _y; i++) {
//		for (int j = 1; j <= _x; j++) {
//			if (map[i][j] == '*') {
//				cnt++;
//				int temp = jfsiel(i, j);
//				max = max > temp ? max : temp;
//			}
//		}
//	}
//	cout << cnt << " " << max << endl;
//}
//
//int main() {
//	int TC;
//	cin >> TC;
//	while (TC--) {
//		int x, y;
//		cin >> x >> y;
//
//		for (int i = 1; i <= y; i++) {
//			for (int j = 1; j <= x; j++) {
//				cin >> map[i][j];
//			}
//		}
//		satelliteNavigation(x, y);
//	}
//}