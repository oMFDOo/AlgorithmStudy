//#include <stdio.h>
//#include <string.h>
//#pragma warning (disable : 4996)
//
//int main() {
//	int TC;
//	scanf("%d", &TC);
//	while (TC--) {
//		char SimPan[25], GU[3] = "IN";
//		int in = 0, out = 0, EJin = 0, EJout = 0;
//		for (int i = 0; i < 8; i++) {
//			scanf("%s", SimPan);
//			if (strcmp(SimPan, GU)) {
//				if (i == 0 || i == 1) {
//					EJout++;
//				}
//				else {
//					out++;
//				}
//			}
//			else {
//				if (i == 0 || i == 1) {
//					EJin++;
//				}
//				else {
//					in++;
//				}
//			}
//		}
//		//printf("%d %d %d %d\n", EJin, EJout, in, out);
//		if (EJin == 2) {
//			printf("IN\n");
//		}
//		else if (EJout == 2) {
//			printf("OUT\n");
//		}
//		else if (in>out) {
//			printf("IN\n");
//		}
//		else if (out>in) {
//			printf("OUT\n");
//		}
//		else if (out == in) {
//			printf("AGAIN\n");
//		}
//	}
//}