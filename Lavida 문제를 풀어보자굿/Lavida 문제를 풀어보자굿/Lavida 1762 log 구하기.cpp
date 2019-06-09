#include <stdio.h>
#pragma warning (disable : 4996)

int main() {
	int TC;
	scanf("%d", &TC);
	while (TC--) {
		int A, B, cnt = 0;
		double C;
		scanf("%d %d", &A, &B);
		C = B;
		while (1) {
			
			if (C<=A) {
				break;
			}
			C = (double) C/A;
			cnt++;
		}
		if (B%A != 0) {
			printf("%d\n", cnt);
		}
		else {
			printf("%d\n", cnt);
		}
	}
}