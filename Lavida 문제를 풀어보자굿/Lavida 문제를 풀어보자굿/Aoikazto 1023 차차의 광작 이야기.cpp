#include <stdio.h>
#include <math.h>
#pragma warning (disable : 4996)

int main() {
	int TestCase;
	scanf("%d", &TestCase);
	while (TestCase--) {
		double size;
		scanf("%lf", &size);

		for (int y = 0; y < size; y++) {
			for (int x = 0; x < size; x++) {
				if (y < size / 2.0 && x >= y && x < size - y) {   // up
					printf("%d", (int)round(size / 2.0 - y));
				}
				else if (x < size - y - 1 && (y > 0 || y < size - 1)) {   // left
					printf("%d", (int)round(size / 2.0 - x));
				}
				else if (y >= size / 2.0 && (x < (y / 2.0) * 2 + 1)) {   // down
					printf("%d", (int)round(y + 1.0 - size / 2.0));
				}
				else {
					printf("%d", (int)round(x - size / 2.0 + 1));
				}
			}
			printf("\n");
		}
	}
}