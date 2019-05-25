#include <stdio.h>
#pragma warning (disable : 4996)

int main() {

	int size, st[10001] = {0},num;
	scanf("%d", &size);

	for (int i = 0; i < size; i++) {
		scanf("%d", &st[i + 1]);
	}
	scanf("%d", &num);
	printf("%d\n", st[num]);

}