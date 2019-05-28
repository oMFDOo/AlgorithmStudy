#include <stdio.h>
#pragma warning (disable : 4996)

int main() {

	long long tc, i, n, m;
	scanf("%lld", &tc);

	while (tc--) {
		scanf("%lld %lld", &n, &m);
		for (i = n + 1; i <= m; i++) {
			n += i;
		}

		printf("%lld\n", n);
	}
}