#include <stdio.h>
#pragma warning (disable : 4996)

int main() {
	int join;
	scanf("%d", &join);		// 참여하는 사람의 수

	while (join--) {
		int KS, KR, KP, TS, TR, TP;

		scanf("%d %d %d %d %d %d", &KS, &KR, &KP, &TS, &TR, &TP);
		int win = 0, lose = 0;

		win = KS*TP + KR*TS + KP*TR;
		lose = KS*TR + KR*TP + KP*TS;

		if (win > lose) {
			printf("Kong\n");
		}
		else if (win < lose) {
			printf("Taeyoung\n");
		}
		else {
			printf("Draw\n");
		}
	}
}