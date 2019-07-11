//#include <stdio.h>
//#pragma warning (disable : 4996)
//
//int Number[30], Turn;
//
//int PlusAndMinus(int turn) {
//	int temp = 0, max = 0;
//	for (int i = 0; i < turn; i++) {
//		temp += Number[i];
//		if (max < temp) {
//			max = temp;
//		}
//		else if (temp < 0) {
//			temp = 0;
//		}
//	}
//	return max;
//}
//
//int AllMinus(int TURN) {
//	int MAX = -1000000;
//	for (int i = 0; i < TURN; i++) {
//		if (MAX < Number[i]) {
//			MAX = Number[i];
//		}
//	}
//	return MAX;
//}
//
//int main() {
//	int TC;
//	scanf("%d", &TC);
//	while (TC--) {
//		int Answer;
//		scanf("%d", &Turn);
//		for (int i = 0; i < Turn; i++) {
//			scanf("%d", &Number[i]);
//		}
//		Answer = PlusAndMinus(Turn);
//		if (Answer != 0) {
//			printf("%d\n", Answer);
//		}
//		else {
//			printf("%d\n", AllMinus(Turn));
//		}
//	}
//}