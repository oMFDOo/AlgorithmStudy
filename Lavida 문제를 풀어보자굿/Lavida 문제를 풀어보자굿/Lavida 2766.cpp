#include <stdio.h>
#pragma warning (disable : 4996)

int main() {
	int num;
	scanf("%d", &num);
	for (int y = 0; y < num; y++) {
		for (int x = 0; x < num - y - 1; x++) {
			printf(" ");
		}
		for (int x = 0; x < y * 2 + 1; x++) {
			printf("*");
		}
		printf("\n");
	}
	for (int y = 0; y < num - 1; y++) {
		for (int x = 0; x <= y; x++) {
			printf(" ");
		}
		for (int x = 0; x < (num - y) * 2 - 3; x++) {
			printf("*");
		}
		printf("\n");
	}
}