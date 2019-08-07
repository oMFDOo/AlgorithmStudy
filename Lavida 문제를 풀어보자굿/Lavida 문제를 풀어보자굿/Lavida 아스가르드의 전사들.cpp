//#include <iostream>
//#include <algorithm>
//#include <cstring>
//#include <cstdlib>
//#include <cmath>
//#include <string>
//#include <sstream>
//#include <fstream>
//#include<functional>
//using namespace std;
//
//int main() {
//	int TC;
//	cin >> TC;
//	while (TC--) {
//		int dungeon, people;
//		int level[50][50];
//		int Sort[50], now = 0;
//		
//		cin >> dungeon >> people;
//
//		for (int i = 0; i < dungeon; i++) {
//			int min = 600, max = -1;
//			for (int j = 0; j < people; j++) {
//				cin >> level[i][j];
//				if (min > level[i][j]) {
//					min = level[i][j];
//				}
//				if (max < level[i][j]) {
//					max = level[i][j];
//				}
//			}
//			Sort[now++] = min;
//			Sort[now++] = max;
//		}
//		sort(Sort, Sort+now, greater<int>());
//		for (int i = 0; i < now; i++) {
//			cout << Sort[i] << " " ;
//		}
//		cout << endl;
//	}
//}