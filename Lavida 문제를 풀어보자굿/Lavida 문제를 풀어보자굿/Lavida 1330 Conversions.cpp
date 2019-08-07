//#include <iostream>
//#include <algorithm>
//#include <string.h>
//#include <stdlib.h>
//#include <math.h>
//
//using namespace std;
//
//int main() {
//	int TC, turn = 1;
//	cin >> TC;
//	while (TC--) {
//		double number, result;
//		char unit[5][5] = { "kg", "lb", "l", "g" }, input[5];
//		
//		cin >> number >> input;
//
//		if (strcmp(unit[0], input) == 0) {		// kg -> lb
//			number *= 2.2046;
//			number = round(number*10000)/10000;
//			printf("%d %.4f lb\n",turn, number);
//		}
//		else if (strcmp(unit[1], input) == 0) {	// lb -> kg
//			number *= 0.4536;
//			number = round(number * 10000) / 10000;
//			printf("%d %.4f kg\n", turn, number);
//		}
//		else if (strcmp(unit[2], input) == 0) {	// l -> g
//			number *= 0.2642;
//			number = round(number * 10000) / 10000;
//			printf("%d %.4f g\n", turn, number);
//		}
//		else if (strcmp(unit[3], input) == 0) {	// g -> l
//			number *= 3.7854;
//			number = round(number * 10000) / 10000;
//			printf("%d %.4f l\n", turn, number);
//		}
//		turn++;
//	}
//}