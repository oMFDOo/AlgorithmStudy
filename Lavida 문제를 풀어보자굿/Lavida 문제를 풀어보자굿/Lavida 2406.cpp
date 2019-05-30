#include <stdio.h>
#pragma warning (disable : 4996)

int main() {
	int tC;
	scanf("%d", &tC);
	while (tC--) {
		int N[6], JS = 0, MS = 0,JC =0, MC = 0;
		for (int i = 0; i < 6; i++) {
			scanf("%d", &N[i]);
		}
		for (int i = 0; i < 3; i++) {
			JS += N[i];
			MS += N[3+i];
			if (N[i] % 2 != 0) {
				JC++;
			}
			if (N[3 + i] % 2 != 0) {
				MC++;
			}
		}
		if (JS > MS) {
			printf("Joo-Ahn wins\n");
		}
		else if (JS < MS) {
			printf("Min-Gwang wins\n");
		}
		else {
			if (JC > MC) {
				printf("Joo-Ahn wins\n");
			}
			else if (JC < MC) {
				printf("Min-Gwang wins\n");
			}
			else {
				printf("Draw\n");
			}
		}
	}
}