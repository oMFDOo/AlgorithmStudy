#include <stdio.h>
#include <math.h>

int main() {
	int TC;
	scanf("%d", &TC);
	while (TC--){
		int T, D2;
		double D1, mul = 1;
		scanf("%d",&T);
		for (int i = 0; i < T; i++) {
			scanf("%lf %d", &D1, &D2);
			mul *= pow(D1, D2);
		}
		printf("%.2lf\n", mul);
	}
}