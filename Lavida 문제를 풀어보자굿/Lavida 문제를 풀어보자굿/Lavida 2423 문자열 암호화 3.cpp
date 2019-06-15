#include <stdio.h>
#include <string.h>
#pragma warning (disable : 4996)

int main() {
	int TC;
	scanf("%d", &TC);
	while (TC--) {
		int len;
		char T[100];
		scanf("%s", &T[0]);
		len = strlen(T);
		for (int i = 0; i < len; i++) {
			if (T[i] > 64 && T[i] < 90) {	// 대문자는 20 빼주기
				T[i] -= 20;
			}
			else if (T[i]=='a') {
				T[i] = '!';
			}
			else if (T[i]=='e') {
				T[i] = '#';
			}
			else if (T[i]=='i') {
				T[i] = '$';
			}
			else if (T[i]=='o') {
				T[i] = '%';
			}
			else if (T[i]=='u') {
				T[i] = '&';
			}
			else if (T[i]<='m') {
				T[i] -= 5;
			}
			else if (T[i]>='n') {
				T[i] += 3;
			}
		}
		printf("%s\n", T);
	}
}