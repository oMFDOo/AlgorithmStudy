#include <stdio.h>
#pragma warning (disable : 4996)

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int m, num[3], A = 1;
		scanf("%d", &m);
		for (int i = 0; i < 3; i++) {
			scanf("%d", &num[i]);
			if (m % num[i] == 0) {
			}
			else {
				A = 0;
			}
		}
		if (A) {
			printf("YES\n");
		}
		else 
			printf("NO\n");
	}
}