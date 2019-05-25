#include <stdio.h>
#pragma warning (disable : 4996)


int sum(int add) {
	int Sum = 0;
	for (int i = 0; i < 8; i++) {
		Sum += (add % 10) << i;
		add /= 10;
	}
	return Sum;
}

int main() {
	int testCase;
	scanf("%d", &testCase);
	while (testCase--) {
		int addX, addY, addZ, addW;
		int X = 0, Y = 0, Z = 0, W = 0;
		scanf("%8d%8d%8d%8d", &addX, &addY, &addZ, &addW);

		X = sum(addX);
		Y = sum(addY);
		Z = sum(addZ);
		W = sum(addW);

		printf("%d.%d.%d.%d\n", X, Y, Z, W);
	}
}