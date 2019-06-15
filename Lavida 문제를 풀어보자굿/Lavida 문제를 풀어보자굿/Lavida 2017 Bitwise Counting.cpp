#include<stdio.h>
int main()
{
	int a = 0, t = 256;
	while (t--) {
		int a_, num[8];
		a_ = a;
		for (int i = 0; i < 8; i++) {
			num[7 - i] = a_ % 2;
			a_ /= 2;
		}
		for (int i = 0; i < 8; i++) {
			printf("%d", num[i]);
		}
		printf("\n");
		a++;
	}
}