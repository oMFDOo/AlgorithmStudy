#include <stdio.h>
#pragma warning (disable : 4996)

int main() {
	int testCase;
	scanf("%d", &testCase);
	while (testCase--) {
		double x, y, a, b;
		scanf("%lf %lf %lf %lf", &x, &y, &a, &b);
		printf("%.1lf %.1lf\n", (x+a)/2, (y+b)/2);
	}
}