#include <stdio.h>
#pragma warning (disable : 4996)

int main() {
	int TC;
	scanf("%d", &TC);

	for (int i = 0; i < TC; i++) {

		int S, S_;
		scanf("%d", &S);
		if (S % 2 == 0) {
			S--;
		}
		S_ = S;
		int x, count = 0;
		

		S = S / 2 + 1;

		for (int y = 0; y < S; y++) {
			for (int x = 0; x < S - 1 - y; x++) {
				printf(" ");
			}
			for (int x = 0; x < y * 2 + 1; x++) {
				if ((y >= 1 && y < S) && (x > 0 && x <= y * 2 - 1))
					printf(" ");
				else {
					printf("*");
				}
			}
			printf("\n");
		}
		for (int y = 0; y < S - 1; y++) {
			for (int x = 0; x < y + 1 && y < S - 1; x++) {
				printf(" ");
			}
			for (int x = 0; x < (S - y) * 2 - 3; x++) {
				if ((y <= S - 1) && ((x <= (S - y) * 2 - 5) && x > 0)) {
					printf(" ");
				}
				else {
					printf("*");
				}
			}
			printf("\n");
		}
		
		for (int e = 0; e < S_; e++) {
			count++;
			for (int i = 0; i < S_; i++) {
				if ((count == 1 || e == S_ - 1) || (i == 0 || i == S_ - 1)) {
					printf("*");
				}
				else {
					printf(" ");
				}

			}
			printf("\n");
		}
	}
}