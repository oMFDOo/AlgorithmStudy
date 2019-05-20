#include <stdio.h>
#include <math.h>

int main() {
	int x[4] = { 0, }, y[4] = { 0, };
	for (int i = 0; i < 3; ++i) {
		scanf("%d %d", &x[i], &y[i]);
	}

	int temp;
	double result;
	temp = (x[0] * y[1] + x[1] * y[2] + x[2] * y[0]) - (x[0] * y[2] + x[2] * y[1] + x[1] * y[0]);
	if (temp < 0)
		temp *= -1;
	result = temp / 2.0;
	unsigned long int resultOutput;
	resultOutput = 4 * result*result;

	printf("%d", resultOutput);
	return 0;
}