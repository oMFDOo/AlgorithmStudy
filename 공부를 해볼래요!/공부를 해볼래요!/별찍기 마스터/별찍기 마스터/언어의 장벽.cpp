#include <stdio.h>
#pragma warning (disable : 4996)

int main() {

	int testCase;
	scanf("%d", &testCase);
	while (testCase--) {
		char al;
		
		int size;
		scanf("%d", &size);

		for (int y = 0; y < size; y++) {
			al = 'A';
			for (int x = 0; x < size; x++) {
				if (y == x) {
					al += y;
				}
				printf("%c", al);
				al++;
			}
			printf("\n");
		}
	}
}