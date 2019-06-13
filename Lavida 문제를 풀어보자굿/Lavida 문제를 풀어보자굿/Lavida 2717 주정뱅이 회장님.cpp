#include <stdio.h>
#pragma warning (disable : 4996)

int main() {
	int N, T = 5;
	scanf("%d", &N);
	double A, sum = 0, max;
	while (T--) {
		max = 0;
		for (int i = 0; i < N; i++) {
			scanf("%lf", &A);
			if (max < A) {
				max = A;
			}
		}
		sum += max;
	}

	printf("%.3lf\n", sum);
}