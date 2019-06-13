//#include <stdio.h>
//#pragma warning (disable : 4996)
//
//
//
//#define SCISSORS 1
//
//#define ROCK 2
//
//#define PAPER 3
//
//
//
//#define WIN 1
//
//#define LOSE -1
//
//#define DRAW 0
//
//
//
//int calculateRockScissorsPaper(int rockScissorsPaper1, int rockScissorsPaper2) {
//
//	if (rockScissorsPaper1 == SCISSORS) {
//
//		if (rockScissorsPaper2 == SCISSORS) {
//
//			return DRAW;
//
//		}
//
//		if (rockScissorsPaper2 == ROCK) {
//
//			return LOSE;
//
//		}
//
//		if (rockScissorsPaper2 == PAPER) {
//
//			return WIN;
//
//		}
//
//	}
//
//	if (rockScissorsPaper1 == ROCK) {
//
//		if (rockScissorsPaper2 == SCISSORS) {
//
//			return WIN;
//
//		}
//
//		if (rockScissorsPaper2 == ROCK) {
//
//			return DRAW;
//
//		}
//
//		if (rockScissorsPaper2 == PAPER) {
//
//			return LOSE;
//
//		}
//
//	}
//
//	if (rockScissorsPaper1 == PAPER) {
//
//		if (rockScissorsPaper2 == SCISSORS) {
//
//			return LOSE;
//
//		}
//
//		if (rockScissorsPaper2 == ROCK) {
//
//			return WIN;
//
//		}
//
//		if (rockScissorsPaper2 == PAPER) {
//
//			return DRAW;
//
//		}
//	}
//}
//
//
//
//// expectedRockScissorsPaperResult = 0, 1, -1
//
//int calculatePercent(int RL, int RR, int HL, int HR, int expectedRockScissorsPaperResult) {
//
//	// RL vs HL
//
//
//
//	int caseCount = 0;
//
//
//
//	// WinRLHL = RL이 이기면 1, 지면 0
//
//
//
//	if (calculateRockScissorsPaper(RL, HL) == expectedRockScissorsPaperResult) {
//
//		caseCount += 1;
//
//	}
//
//	if (calculateRockScissorsPaper(RL, HR) == expectedRockScissorsPaperResult) {
//
//		caseCount += 1;
//
//	}
//
//	if (calculateRockScissorsPaper(RR, HL) == expectedRockScissorsPaperResult) {
//
//		caseCount += 1;
//
//	}
//
//	if (calculateRockScissorsPaper(RR, HR) == expectedRockScissorsPaperResult) {
//
//		caseCount += 1;
//
//	}
//
//
//
//	const int totalCaseCount = 4;
//
//	// 0, 1, 2, 3
//
//
//
//	// 퍼센트 계산 = (경우의 수) / (총 경우의 수) * 100
//
//	int percent = caseCount * 100 / totalCaseCount;
//
//
//
//	return percent;
//
//}
//
//
//
//int main() {
//
//	int TC;
//
//	scanf("%d", &TC);
//
//	while (TC--) {
//
//		// ::: 류주가 이길 / 비길 / 질 확률 :::  1. 가위 2. 바위 3. 보   :::
//
//		int RL, RR, HL, HR;
//
//		int win, draw, lose;
//
//
//
//		scanf("%d %d %d %d", &RL, &RR, &HL, &HR);
//
//
//
//		win = calculatePercent(RL, RR, HL, HR, WIN);
//
//		draw = calculatePercent(RL, RR, HL, HR, DRAW);
//
//		lose = calculatePercent(RL, RR, HL, HR, LOSE);
//
//
//
//		printf("%d %d %d\n", win, draw, lose);
//
//	}
//
//}