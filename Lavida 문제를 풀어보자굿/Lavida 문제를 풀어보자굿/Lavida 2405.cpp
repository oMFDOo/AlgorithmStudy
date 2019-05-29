#include <stdio.h>
#include <math.h>
#pragma warning (disable : 4996)

int main() {
	int testCase;
	scanf("%d", &testCase);

	while (testCase--) {
		int a, b, c, d, a_, c_;
		scanf("%d %d %d %d", &a, &b, &c, &d);

		a_ = a;
		c_ = c;

		a = pow(a, b);
		c = pow(c, d);
		if (a > c) {
			printf("%d^%d\n", a_, b);
		}
		else if (a < c) {
			printf("%d^%d\n", c_, d);
		}
		else {
			printf("SAME\n");
		}
	}
}