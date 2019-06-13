#include <stdio.h>
#pragma warning (disable : 4996)
int main() {
	int n, i, a = 0, b = 1, c = 1,p = 0;
	scanf("%d", &n);
	printf("*\n");
	for (i = 0; i < n - 1; i++) {
		a += c;
		c = b;
		b = a;
		if (b > 55 && b % 56 != 0) {
			for (int x = 0; x < b % 56; x++) {
				printf("*");
				p = x;
			}
			printf(" : %d", p);
		}
		else if (b > 55 && b % 56 == 0) {
			printf("*");
		}
		else {
			for (int x = 0; x < b; x++) {
				printf("*");
				p = x;
			}
			printf(" : %d", p);
		}
		printf("\n");
	}
}