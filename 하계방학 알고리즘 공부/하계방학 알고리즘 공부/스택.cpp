//#include <stdio.h>
//#include <string.h>
//
//int Hmm[10000], pos = 1;
//
//int CommandCheck(char Type[9]) {
//	int PushInput;
//
//	if (!strcmp(Type, "push")) {
//		scanf("%d", &PushInput);
//		Hmm[pos++ - 1] = PushInput;
//	}
//	else if (!strcmp(Type, "pop")) {
//		if (pos > 1) {
//			printf("%d\n", Hmm[pos - 2]);
//			Hmm[pos - 2] = 0;
//			pos--;
//		}
//		else {
//			printf("-1\n");
//		}
//	}
//	else if (!strcmp(Type, "size")) {
//		if (pos > 1) {
//			printf("%d\n", pos - 1);
//		}
//		else {
//			printf("0\n");
//		}
//	}
//	else if (!strcmp(Type, "empty")) {
//		if (pos > 1) {
//			printf("0\n");
//		}
//		else {
//			printf("1\n");
//		}
//	}
//	else if (!strcmp(Type, "top")) {
//		if (pos > 1) {
//			printf("%d\n", Hmm[pos - 2]);
//		}
//		else {
//			printf("-1\n");
//		}
//	}
//	return 0;
//}
//
//int main() {
//	int TC;
//	scanf("%d", &TC);
//	while (TC--) {
//		char Command[9];
//		scanf("%s", Command);
//		CommandCheck(Command);
//	}
//}