//#include <stdio.h>
//#pragma warning (disable : 4996)
//
//void DecToBin(int num[]) {
//	for (int i = 0; i < 8; i++) {
//		num[i + 1] = num[0] % 2;
//		num[0] /= 2;
//	}
//}
//
//void Print(int num[]) {
//	for (int i = 8; i > 0; i--) {
//		printf("%d", num[i]);
//	}
//}
//
//int main() {
//	int TC;
//	scanf("%d", &TC);
//	while (TC--) {
//		int Address1[9], Address2[9], Address3[9], Address4[9];
//		scanf("%d.%d.%d.%d", &Address1[0], &Address2[0], &Address3[0], &Address4[0]);
//		DecToBin(Address1);
//		DecToBin(Address2);
//		DecToBin(Address3);
//		DecToBin(Address4);
//		Print(Address1);
//		Print(Address2);
//		Print(Address3);
//		Print(Address4);
//		printf("\n");
//	}
//}