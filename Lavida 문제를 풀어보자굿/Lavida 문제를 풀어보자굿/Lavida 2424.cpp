#include <stdio.h>
#pragma warning (disable : 4996)

int main() {
	int testCase;
	scanf("%d", &testCase);

	while (testCase--) {

		int turn, num[55] = {0}, min = 1001, max = 0, sub;
		scanf("%d", &turn);

		for (int i = 0; i < turn; i++) {
			scanf("%d", &num[i]);
			if (min > num[i]) {
				min = num[i];
			}
			if (max < num[i]) {
				max = num[i];
			}
		}
		sub = max - min;
		if (sub == 0) {
			printf("NO\n");
		}
		else if (max%sub == 0 && max%sub == 0) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
}