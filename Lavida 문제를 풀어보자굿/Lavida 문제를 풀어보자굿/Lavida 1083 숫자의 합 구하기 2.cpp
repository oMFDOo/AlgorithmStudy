#include <stdio.h>
#pragma warning (disable : 4996)

int main() {
	int TC;
	scanf("%d", &TC);
	while (TC--) {
		long long n, m, result;
		scanf("%lld %lld", &n, &m);
		result = ((n+m)*(m-n+1))/2;
		printf("%lld\n", result);
	}
}