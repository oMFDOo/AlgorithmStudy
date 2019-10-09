//#include <cstdio>
//#include <iostream>
//#include <cstring>
//#include <string>
//#include <cmath>
//#include <climits>
//
//using namespace std;
//
//const int MAX_lab_SIZE = 10;
//
//int lab[MAX_lab_SIZE][MAX_lab_SIZE];
//int copyLab[MAX_lab_SIZE][MAX_lab_SIZE];
//bool wallwall[MAX_lab_SIZE][MAX_lab_SIZE];
//
//int MAX, RESULT;
//
//struct mapSize {
//	int x;
//	int y;
//} MS;
//
//int countSafeZone() {
//	int cnt = 0;
//	for (int i = 1; i <= MS.y; i++) {
//		for (int j = 1; j <= MS.x; j++) {
//			if (lab[i][j] == 0) {
//				cnt++;
//			}
//		}
//	}
//	
//	return cnt;
//}
//
//void BFS(int _i, int _j) {
//	lab[_i][_j] = 2;
//	if (lab[_i][_j - 1] == 0) {		// 좌
//		BFS(_i, _j-1);
//	}
//	if (lab[_i - 1][_j] == 0) {		// 상
//		BFS(_i - 1, _j);
//	}
//	if (lab[_i][_j + 1] == 0) {		// 우
//		BFS(_i, _j + 1);
//	}
//	if (lab[_i + 1][_j] == 0) {		// 하
//		BFS(_i + 1, _j);
//	}
//}
//
//void spreadVirus() {
//	int sum = 0;
//	for (int i = 1; i <= MS.y; i++) {
//		for (int j = 1; j <= MS.x; j++) {
//			if (lab[i][j] == 2) {
//				BFS(i,j);
//			}
//		}
//	}
//	countSafeZone();
//}
//
//void buildWall(int positionX, int positionY, int cnt) {
//	if (cnt == 3) {
//		spreadVirus();
//		RESULT = countSafeZone();
//		if (MAX < RESULT) {
//			MAX = RESULT;
//		}
//		/*for (int i = 1; i <= MS.y; i++) {
//			for (int j = 1; j <= MS.x; j++) {
//				cout << lab[i][j] << " ";
//			}
//			cout << endl;
//		}
//		cout << endl << endl;*/
//		for (int i = 1; i <= MAX_lab_SIZE; i++) {
//			for (int j = 1; j <= MAX_lab_SIZE; j++) {
//				if (lab[i][j] == 2)
//					lab[i][j] = copyLab[i][j];
//			}
//		}
//		return ;
//	}
//	// temp : 줄바꿈 시 j를 초기화 해서 오류를 고치는 꼼수
//	int temp = 1;
//	for (int i = positionY; i <= MS.y; i++) {
//		for (int j = positionX; j <= MS.x; j++) {
//			if (temp < i) {
//				temp = i;
//				j = 1;
//			}
//			if (wallwall[i][j] == true || lab[i][j] != 0) {
//				continue;
//			}
//			wallwall[i][j] = true;
//			lab[i][j] = 1;
//			
//			buildWall(j, i, cnt + 1);
//			wallwall[i][j] = false;
//			lab[i][j] = 0;
//		}
//	}
//}
//
//int main() {
//	MAX = 0;
//	cin >> MS.y >> MS.x;
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 10; j++) {
//			lab[i][j] = 1;
//			copyLab[i][j] = 1;
//		}
//	}
//	for (int i = 1; i <= MS.y; i++) {
//		for (int j = 1; j <= MS.x; j++) {
//			cin >> lab[i][j];
//			copyLab[i][j] = lab[i][j];
//		}
//	}
//	buildWall(1, 1, 0);
//	
//	cout << MAX << endl;
//}