//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#pragma warning (disable : 4996)
//
//int main() {
//	int TC;
//	scanf("%d", &TC);
//	while (TC--) {
//
//		int E1Floor, E2Floor, MyFloor, DistanceE1, DistanceE2, Len;
//		char UpDown[10] = {0};
//
//		scanf("%d %d %d %s", &E1Floor, &E2Floor, &MyFloor, UpDown);
//
//		DistanceE1 = abs(E1Floor - MyFloor);
//		DistanceE2 = abs(E2Floor - MyFloor);
//		Len = strlen(UpDown);
//
//		if (DistanceE1 < DistanceE2) {
//			printf("%d\n", E1Floor);
//		}
//		if (DistanceE1 > DistanceE2) {
//			printf("%d\n", E2Floor);
//		}
//		if (DistanceE1 == DistanceE2) {
//			if (Len == 2) {
//				if (E1Floor < E2Floor) {
//					printf("%d\n", E1Floor);
//				}
//				else {
//					printf("%d\n", E2Floor);
//				}
//			}
//			else {
//				if (E1Floor > E2Floor) {
//					printf("%d\n", E1Floor);
//				}
//				else {
//					printf("%d\n", E2Floor);
//				}
//			}
//		}
//	}
//}