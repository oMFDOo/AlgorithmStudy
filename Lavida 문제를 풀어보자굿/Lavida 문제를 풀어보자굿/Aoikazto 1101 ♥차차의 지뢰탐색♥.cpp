//#include <iostream>
//#include <algorithm>
//#include <cstring>
//#include <cstdlib>
//#include <cmath>
//#define	 STAR -1
//using namespace std;
//
//int main() {
//	int TC;
//	cin >> TC;
//	while (TC--) {
//		char minesweeper[101][101];
//		int map[101][101] = { 0 };
//		int x, y;
//
//		cin >> x >> y;
//
//		for (int i = 1; i <= y; i++) {
//			for (int j = 1; j <= x; j++) {
//				cin >> minesweeper[i][j];
//			}
//		}
//		for (int i = 1; i <= y; i++) {
//			for (int j = 1; j <= x; j++) {
//				if (minesweeper[i][j] == '*') {
//					map[i][j] = STAR;
// 					if (map[i+1][j-1] != STAR)map[i+1][j-1]++;
//					if (map[i+1][j] != STAR)map[i+1][j]++;
//					if (map[i+1][j+1] != STAR)map[i+1][j+1]++;
//					if (map[i][j-1] != STAR)map[i][j-1]++;
//					if (map[i][j+1] != STAR)map[i][j+1]++;
//					if (map[i-1][j-1] != STAR)map[i-1][j-1]++;
//					if (map[i-1][j] != STAR)map[i-1][j]++;
//					if (map[i-1][j+1] != STAR)map[i-1][j+1]++;
//				}
//			}
//		}
//		for (int i = 1; i <= y; i++) {
//			for (int j = 1; j <= x; j++) {
//				if (map[i][j] == STAR) cout << "*";
//				else if (map[i][j] == 0) cout << ".";
//				else cout << map[i][j];
//			}
//			cout << endl;
//		}
//	}
//}