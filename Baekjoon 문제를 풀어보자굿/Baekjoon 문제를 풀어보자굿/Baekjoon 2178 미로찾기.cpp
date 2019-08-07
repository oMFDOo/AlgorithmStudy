//#include <cstdio>
//#include <iostream>
//#include <cstring>
//#include <string>
//#include <cmath>
//#include <climits>
//#include <queue>
//
//#define FIND 105
//using namespace std;
//char maze[105][105];
//queue <int> xq, yq;
//
//int findingWay(int _x, int _y) {
//	maze[_y][_x] = '#';
//	int TF = 0;
//
//	if (maze[_y][_x - 1] == '-') {		// ก็
//		xq.push(_x - 1);
//		yq.push(_y);
//	}
//	else if (maze[_y][_x - 1] == 'E') {
//		TF = 1;
//		return TF;
//	}
//	if (maze[_y - 1][_x] == '-') {		// ก่
//		xq.push(_x);
//		yq.push(_y - 1);
//	}
//	else if (maze[_y - 1][_x] == 'E') {
//		TF = 1;
//		return TF;
//	}
//	if (maze[_y][_x + 1] == '-') {		// กๆ
//		xq.push(_x + 1);
//		yq.push(_y);
//	}
//	else if (maze[_y][_x + 1] == 'E') {
//		TF = 1;
//		return TF;
//	}
//	if (maze[_y + 1][_x] == '-') {		// ก้
//		xq.push(_x);
//		yq.push(_y + 1);
//	}
//	else if (maze[_y + 1][_x] == 'E') {
//		TF = 1;
//		return TF;
//	}
//	xq.pop();
//	yq.pop();
//	findingWay(xq.front(), yq.front());
//	return TF;
//}
//
//
//int search(int _x, int _y) {
//	int T = 1, t = 0;
//	for (int i = 1; i <= _y && T; i++) {
//		for (int j = 1; j <= _y; j++) {
//			if (maze[i][j] == 'S') {
//				xq.push(j);
//				yq.push(i);
//				t = findingWay(j,i);
//				T = 0;
//				break;
//			}
//		}
//	}
//	return t;
//}
//
//
//int main() {
//	int TC;
//	cin >> TC;
//	while (TC--) {
//		int x, y;
//		cin >> y >> x;
//
//		for (int i = 1; i <= y; i++) {
//			for (int j = 1; j <= x; j++) {
//				cin >> maze[i][j];
//			}
//		}
//		int T = search(x, y);
//		if (T) {
//			cout << "Yes\n";
//		}
//		else {
//			cout << "No\n";
//		}
//	}
//}