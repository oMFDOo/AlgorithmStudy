#include <stdio.h>
#pragma warning (disable : 4996)

int main() {
	int a, b, c, d;
	scanf("%d %d", &a, &b);

	while (true) {
		c = a % b;
		a = b;
		b = c;

		if (c == 0) {
			printf("%d", a);
			break;
		}
	}
}