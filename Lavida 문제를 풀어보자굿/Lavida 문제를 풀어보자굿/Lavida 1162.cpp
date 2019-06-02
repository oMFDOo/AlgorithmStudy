#include <stdio.h>
#pragma warning (disable : 4996)
int main() {
	int TC;
	scanf("%d", &TC);
	while (TC--) {
		int P[7] = { 0 }, sum = 0, temp, cnt = 0;
		for (int i = 0; i < 5; i++) {
			scanf("%d", &P[i]);
			sum += P[i];
		}

		for (int i = 0; i < 5; i++) {
			for (int j = 0; j + 1 < 5 - i; j++) {
				if (P[j] > P[j + 1]) {
					temp = P[j];
					P[j] = P[j + 1];
					P[j + 1] = temp;
				}
			}
		}
		if (P[3] - P[1] > 3) {
			printf("KIN\n");
		}
		else {
			sum -= P[0] + P[4];
			printf("%d\n", sum);
		}
	}
}