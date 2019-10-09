//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	int TC;
//	cin >> TC;
//	while (TC--) {
//		int inputHour, inputMin, playTime;
//
//		cin >> inputHour;
//		cin.ignore(2, ':');
//		cin >> inputMin >> playTime;
//
//		int plusHour, resultMin, resultHour;
//		int makeHour = 60 - inputMin;
//		int serviceCharge = 0;
//
//		//plusHour = (inputMin + playTime % 60) / 60 + playTime / 60;
//		//resultMin = (inputMin + playTime%60) % 60;
//		//resultHour = (inputHour + plusHour) % 24;
//
//		while (playTime >= 0) {
//			if (playTime - 60 >= 0) {
//				inputHour++;
//			}
//			else {
//				if (playTime - 60 + inputMin >= 60) {
//					inputHour++;
//				}
//			}
//
//			if (21 < inputHour) {
//				while (inputHour == 24) {
//					if (playTime - 60 >= 0) {
//						inputHour++;
//					}
//					else {
//						break;
//					}
//				}
//				serviceCharge += 5000;
//			}
//			else if (inputHour < 8) {
//				while (inputHour == 8) {
//					if (playTime - 60 >= 0) {
//						inputHour++;
//					}
//					else {
//						break;
//					}
//				}
//				serviceCharge += 5000;
//			}
//			else {
//				serviceCharge += 1000;
//			}
//
//			if (inputHour == 24) {
//				inputHour = 0;
//			}
//			playTime -= 60;
//		}
//		cout << serviceCharge << endl;
//	}
//}
//
//
