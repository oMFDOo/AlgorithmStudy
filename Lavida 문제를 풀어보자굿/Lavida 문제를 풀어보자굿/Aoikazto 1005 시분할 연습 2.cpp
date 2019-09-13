///*
//	내가 짠 코드
//*/
//#include <iostream>
//using namespace std;
//
//int main() {
//	int TC;
//	cin >> TC;
//	while (TC--) {
//		int turn, cycle, cycleBox[10];
//		cin >> turn >> cycle;
//		for (int i = 0; i < cycle; i++) {
//			cin >> cycleBox[i];
//		}
//		for (int i = 1; i <= turn; i++) {
//			for (int j = 0; j < cycle; j++) {
//				char result = j + 65;
//				if (!(i%cycleBox[j])) cout << result;
//			}
//		}
//		cout << endl;
//	}
//}
//
///*
//	구조체로 푼 친구 코드 수정
//*/
//
//#include <stdio.h>
//#pragma warning (disable : 4996)
//
//typedef struct _Struct {
//	char str;
//	int cycle;
//	int count;
//} Struct;
//
//int main() {
//	int TC;
//	scanf("%d", &TC);
//
//	int n, m;
//	while (TC--) {
//		int t, len;
//		scanf("%d %d", &t, &len);
//
//		Struct H[120];
//		for (n = 0; n < len; n++) {
//			H[n].str = 65 + n;
//			H[n].count = 0;
//			scanf("%d", &H[n].cycle);
//		}
//
//		for (n = 0; n < t; n++) {
//			for (m = 0; m < len; m++) {
//				if (++H[m].count >= H[m].cycle) {
//					printf("%c", H[m].str);
//					H[m].count = 0;
//				}
//			}
//		}
//		printf("\n");
//	}
//}