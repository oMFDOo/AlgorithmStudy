#include <stdio.h>
#include <math.h>
#pragma warning (disable : 4996)

int main() {

	int testCase;
	scanf("%d", &testCase);
	while (testCase--) {
		int n[5], SAME = 1, n_ = 0, N = 0, r, rst;
		for (int i = 0; i < 5; i++) {
			scanf("%1d", &n[i]);
		}
		for (int i = 0; i < 5; i++) {
			if (n[i] != n[4 - i]) {
				SAME = 0;
			}
			N += n[i]*pow(10,i);
			n_ += n[4-i]*pow(10,i);
		}
		if (n_ > N) {
			r = n_;
			n_ = N;
			N = r;
		}
		rst = (N-n_)%51;
		if (SAME) {
			printf("SAME\n");
		}
		else {
			printf("%d\n", rst);
		}
	}
}