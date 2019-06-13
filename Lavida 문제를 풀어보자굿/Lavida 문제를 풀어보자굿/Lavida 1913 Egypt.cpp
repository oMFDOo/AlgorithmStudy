#include <stdio.h>
#pragma warning (disable : 4996)

int main() {
	while (7) {
		unsigned long long a[5] = {0}, rlt, temp;
		scanf("%lld %lld %lld", &a[0], &a[1], &a[2]);
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j + 1 < 3; j++) {
				if (a[j] > a[j + 1]) {
					temp = a[j]; 
					a[j] = a[j + 1];
					a[j + 1] = temp;
				}
			}
		}
		printf("%lld %lld %lld\n", a[0], a[1], a[2]);
		if (a[0] == 0&& a[1] == 0&& a[2] == 0) {
			break;
		}
		else {
			a[2] *= a[2];
			rlt = a[0] * a[0] + a[1] * a[1];
			if (a[2] == rlt) {
				printf("right\n");
			}
			else {
				printf("wrong\n");
			}
		}
	}
}