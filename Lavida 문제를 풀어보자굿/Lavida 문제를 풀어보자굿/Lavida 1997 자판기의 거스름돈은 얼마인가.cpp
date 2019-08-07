//#include <iostream>
//#include <algorithm>
//#include <cstring>
//#include <cstdlib>
//#include <cmath>
//#include <string>
//#include <sstream>
//#include <fstream>
//using namespace std;
//
//struct MENU {
//	char meme[25] = { 0 };
//	int price;
//};
//
//struct CALL {
//	char call[25] = { 0 };
//};
//
//int main() {
//	int TC;
//	cin >> TC;
//	while (TC--) {
//		MENU m[20];
//		CALL c;
//		int menu, order, sum = 0;
//
//		cin >> menu >> order;
//		for (int i = 0; i < menu; i++) {
//			cin >> m[i].meme >> m[i].price;
//		}
//		for (int i = 0; i < order; i++) {
//			cin >> c.call;
//			for (int j = 0; j < menu; j++) {
//				if (strcmp(c.call, m[j].meme) == 0) {
//					sum += m[j].price;
//					break;
//				}
//			}
//		}
//		
//		//  총 금액, 투입 금액, 최소 투입 지폐 개수, 거스름돈 액수, 거스름돈 동전 개수
//		int lumpSum, inputMoney, paperMoney, change, coins;
//		lumpSum = sum;
//		inputMoney = ceil((double)sum / 1000.0) * 1000;
//
//		paperMoney
//			= (inputMoney / 10000)
//			+ ((inputMoney % 10000) / 5000)
//			+ (((inputMoney % 10000) % 5000) / 1000);
//		
//		change = inputMoney - lumpSum;
//		coins
//			= (change / 500)
//			+ ((change % 500) / 100);
//
//		cout << lumpSum << " " << inputMoney << " " << paperMoney 
//			<< " " << change << " " << coins << endl;
//	}
//}
//
////#define _CRT_SECURE_NO_WARNINGS
////#include <stdio.h>
////#include <iostream>
////#include <math.h>
////#include <string>
////#include <algorithm>
////#include <vector>
////#include <set>
////#include <queue>
////#include <string.h>
////
////using namespace std;
////
////class Food {
////public:
////	string name;
////	int price;
////
////};
////int main()
////{
////	int testCase = 0;
////	cin >> testCase;
////
////	for (int q = 0; q < testCase; q++) {
////		int a, b;
////		cin >> a >> b;
////
////		Food* food = new Food[a];
////
////		for (int i = 0; i < a; i++) {
////			cin >> food[i].name >> food[i].price;
////		}
////
////		int sum = 0;
////		for (int i = 0; i < b; i++) {
////			Food tmpfood;
////			cin >> tmpfood.name;
////
////			for (int w = 0; w < a; w++) {
////				if (food[w].name == tmpfood.name) {
////					sum += food[w].price;
////					break;
////				}
////			}
////		}
////		int money = sum % 1000 > 0 ? (sum / 1000 + 1) * 1000 : sum;
////		int tmp = sum % 1000 > 0 ? (sum / 1000 + 1) * 1000 : sum;
////
////		int p10000s = tmp / 10000;
////		tmp %= 10000;
////		int p5000s = tmp / 5000;
////		tmp %= 5000;
////		int p1000s = tmp / 1000;
////
////		int exchange = money - sum;
////
////		tmp = exchange;
////
////		int c500s = tmp / 500;
////		tmp %= 500;
////
////		int c100s = tmp / 100;
////		tmp %= 100;
////
////
////
////		cout << sum << " " << money << " " << p10000s + p5000s + p1000s 
////			<< " " << exchange << " " << c500s + c100s << endl;
////
////
////	}
////}