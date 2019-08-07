//#include <iostream>
//#include <algorithm>
//#include <cstring>
//#include <cstdlib>
//#include <cmath>
//#define  STAR -1
//#define SHARP -2
//using namespace std;
//struct position {
//	int normalX[8] = { 1, 1, 1, 0, -1, -1, -1, 0 };
//	int normalY[8] = { 1, 0, -1, -1, -1, 0, 1, 1 };
//	int specialX[16] = { -2, -1, 0, 1, 2, 2, 2, 2, 2, 1, 0, -1, -2, -2, -2, -2 };
//	int specialY[16] = { 2, 2, 2, 2, 2, 1, 0, -1, -2, -2, -2, -2, -2, -1, 0, 1 };
//};
//
//
//int main() {
//	int TC;
//	cin >> TC;
//	while (TC--) {
//		char minesweeper[101][101];
//		int map[101][101] = { 0 };
//		int x, y;
//
//		position P;
//		cin >> y >> x;
//
//		for (int i = 2; i <= y+1; i++) {
//			for (int j = 2; j <= x+1; j++) {
//				cin >> minesweeper[i][j];
//				if (minesweeper[i][j] == '*') {
//					map[i][j] = STAR;
//				}
//				if (minesweeper[i][j] == '#') {
//					map[i][j] = SHARP;
//				}
//			}
//		}
//
//		for (int i = 2; i <= y+1; i++) {
//			for (int j = 2; j <= x+1; j++) {
//				if (minesweeper[i][j] == '*') {
//					for (int p = 0; p < 8; p++) {
//						if (map[i+P.normalY[p]][j+P.normalX[p]] >= 0) {
//							map[i+P.normalY[p]][j+P.normalX[p]] = 1;
//						}
//					}
//				}
//				if (minesweeper[i][j] == '#') {
//					for (int p = 0; p < 8; p++) {
//						if (map[i+P.normalY[p]][j+P.normalX[p]] >= 0) {
//							map[i+P.normalY[p]][j+P.normalX[p]] = 1;
//						}
//					}
//					for (int p = 0; p < 16; p++) {
//						if (map[i+P.specialY[p]][j+P.specialX[p]] >= 0) {
//							map[i+P.specialY[p]][j+P.specialX[p]] = 1;
//						}
//					}
//				}
//			}
//		}
//		for (int i = 2; i <= y+1; i++) {
//			for (int j = 2; j <= x+1; j++) {
//				if (map[i][j] == STAR) {
//					cout << "*";
//				}
//				else if (map[i][j] == SHARP) {
//					cout << "#";
//				}
//				else if (map[i][j] == 0) {
//					cout << "0";
//				}
//				else {
//					cout << map[i][j];
//				}
//			}
//			cout << endl;
//		}
//	}
//}