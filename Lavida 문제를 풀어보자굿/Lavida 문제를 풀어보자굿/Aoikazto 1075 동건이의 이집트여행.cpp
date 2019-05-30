#include <stdio.h>
#pragma warning (disable : 4996)

int main() {
	int tC;
	scanf("%d", &tC);
	while (tC--) {
		int S, T;
		scanf("%d %d", &S, &T);
		if (S % 2 != 0) {
			S++;
		}
		if (S/2<T) {
			printf("No DAP!\n");
		}
		else {
			for (int y = 0; y < S; y++) {
				for (int x = 0; x < S - 1 - y; x++) {
					printf(" ");
				}
				for (int x = 0; x < y * 2 + 1; x++) {
					if (x < T || y >= S - T || x >= y * 2 + 1 - T) {
						printf("*");
					}
					else {
						printf("+");
					}
				}
				printf("\n");
			}
		}
	}
}