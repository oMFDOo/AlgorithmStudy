#include <stdio.h>
#pragma warning(disable:4996)
int main(void)
{
	int testCase;
	scanf("%d", &testCase);
	while (testCase--) {
		int a, b;
		scanf("%d %d", &a, &b);
		for (int y = 0; y < a; y++) {
			if (a / 2 - b < 0) {
				printf("Mental Damages\n");
				break;
			}
			for (int x = 0; x < a; x++) {
				if ((y < b || y >= a - b) || (x >= a - b || x < b)) {
					printf("@");
				}
				else {
					printf("+");
				}
			}
			printf("\n");
		}
	}
}