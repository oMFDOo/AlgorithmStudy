#include <stdio.h>
#pragma warning (disable : 4996)

int main() {
	unsigned long long A, B, C, D, sum = 0;
	scanf("%lld %lld", &A, &B);
	C = A;
	
	while(A) {
		C = A%10;
		D = B;
		while (D) {
			sum += D%10*C;
			D /= 10;
		}
		A /= 10;
	}
	printf("%lld\n", sum);
}