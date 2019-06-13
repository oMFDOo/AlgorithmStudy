//#include <stdio.h>
//#pragma warning (disable : 4996)
//
//int main() {
//	int TC;
//	scanf("%d", &TC);
//	while (TC--) {
//		int m, n, k, p, q, r, sum = 0;
//		scanf("%d %d %d %d %d", &m, &n, &k, &p, &q);
//		if (n < m) {
//			r = n;
//			n = m;
//			m = r;
//		}
//		for (; m <= n; m++) {
//			if (m%k == 0) {
//				sum += m;
//			}
//		}
//		if (sum == 0) {
//			printf("Yes\n");
//		}
//		else if (sum%p == 0 && sum%q == 0) {
//			printf("Yes\n");
//		}
//		else {
//			printf("No\n");
//		}
//	}
//}