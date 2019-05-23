#include <stdio.h>
#pragma warning(disable:4996)
int main(void)
{
	int testCase;
	scanf("%d", &testCase);
	while (testCase--) {
		int a, b;
		char text;

		scanf("%d %d", &a, &b);

		if (a % 2 == 0) {
			a += 1;
		}

		for (int y = 0; y < a; y++) {
			if (a / 2 - b < 0) {
				printf("NOA\n");
				break;
			}
			text = 'A' - 1;
			for (int x = 0; x < a; x++) {
				if ((y < b || y >= a - b) || (x >= a - b || x < b)) {
					if (x >= a / 2 + 1) {
						text--;
						if (y < b || y >= a - b)
							printf("%c", text);
						else
							printf("%c", text + 1);
					}
					else {
						text++;
						printf("%c", text);
					}
				}
				else {
					printf(" ");
				}
			}
			printf("\n");
		}
	}
}