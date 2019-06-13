//#include <stdio.h>
//#pragma warning (disable : 4996)
//
//int main() {
//
//	int testCase;
//	scanf("%d", &testCase);
//
//	while (testCase--) {
//		int n, k, c = 1, mul = 1;
//
//		scanf("%d %d", &n, &k);
//
//		for (int i = k + 1; i <= n; i++) {		
//			mul *= i;
//		}
//		for (int i = 1; i <= n - k; i++) {
//			c *= i;
//		}
//		
//		printf("%d\n", mul / c);
//	}
//}