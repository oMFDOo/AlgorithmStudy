//#include <stdio.h>
//
//int main() {
//	int testCase;
//	scanf("%d",&testCase);
//
//	while (testCase--) {
//
//		int turn, N[55] = {0}, min = 1001, max = 0, b;
//		scanf("%d",&turn);
//
//		for (int i = 0; i < turn; i++) {
//			scanf("%d", &N[i]);
//			if (min > N[i]) {
//				min = N[i];
//			}
//			if (max < N[i]) {
//				max = N[i];
//			}
//		}
//		b = max - min;
//		if (b == 0) {
//			printf("NO\n");
//		}
//		else if (max%b == 0 && max%b == 0) {
//			printf("YES\n");
//		}
//		else {
//			printf("NO\n");
//		}
//	}
//}