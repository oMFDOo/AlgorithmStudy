#include <stdio.h>
#include <string.h>
#pragma warning (disable : 4996)

int main() {
	int TC;
	scanf("%d", &TC);
	while (TC--) {
		char num[105] = {0};
		int len, DAP = 1, i;
		scanf("%s", &num[0]);

		len = strlen(num);

		if (num[1] == '.' || num[2] == '.') {
			if (num[1] == '.')
				i = 2;
			else
				i = 3;
			for (i; i < len; i++) {
				if (num[i] != '0') {
					DAP = 0;
				}
			}
		}
		if (DAP) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}

	}
}