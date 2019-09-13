//#include <stdlib.h>
//#include <string.h>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
////
////int ax[2], ay[2], bx[2], by[2];
////
////int main() {
////	int TC;
////	cin >> TC;
////	while (TC--) {
////		for (int i = 0; i < 2; i++) {
////			cin >> ax[i];
////			cin >> ay[i];
////		}
////		for (int i = 0; i < 2; i++) {
////			cin >> bx[i];
////			cin >> by[i];
////		}
////
////		sort(ax, ax + 2);
////		sort(bx, bx + 2);
////		sort(by, by + 2);
////		sort(by, by + 2);
////
////		int dx, dy;
////		int temp1 = ax[1], temp2 = ax[0];
////		// 큰 거 큰 거 중에 작은 거
////		if (ax[1] > bx[1]) {
////			temp1 = bx[1];
////		}
////		// 작은 거 작은 거 중에 큰 거
////		if (ax[0] < bx[0]) {
////			temp2 = bx[0];
////		}
////		dx = temp1 - temp2;
////
////		temp1 = ay[1];
////		temp2 = ay[0];
////		// 큰 거 큰 거 중에 작은 거
////		if (ay[1] > by[1]) {
////			temp1 = by[1];
////		}
////		// 작은 거 작은 거 중에 큰 거
////		if (ay[0] < by[0]) {
////			temp2 = by[0];
////		}
////		dy = temp1 - temp2;
////
////		if (dx > 0 && dy > 0) {
////			cout << dx * dy << endl;
////		}
////		else {
////			cout << '0' << endl;
////		}
////	}
////}
//
//struct doubleM1
//{
//	int x;
//	int y;
//};
//
//struct doubleM2
//{
//	int x;
//	int y;
//};
//
//int main() {
//	int TC;
//	cin >> TC;
//	while (TC--) {
//
//		struct doubleM1  M1[2];
//		struct doubleM1  M2[2];
//
//		for (int i = 0; i < 2; i++) {
//			cin >> M1[i].x >> M1[i].y;
//		}
//		for (int i = 0; i < 2; i++) {
//			cin >> M2[i].x >> M2[i].y;
//		}
//
//		int xLength, yLenght;
//		int maxTemp, minTemp;
//
//		maxTemp = max(M1[0].x, M1[1].x);
//		minTemp = min(M2[0].x, M2[0].x);
//
//		xLength = maxTemp - minTemp;
//
//		maxTemp = 
//	}
//}