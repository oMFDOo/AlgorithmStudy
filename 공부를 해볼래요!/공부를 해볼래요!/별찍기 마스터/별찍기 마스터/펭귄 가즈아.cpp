#include <stdio.h>
#include <stdlib.h>  // exit()

int main(int argc, char* argv[]) {


	// 옵션 지정하지 않았을 때 에러 출력하고 종료
	if (argc == 1) {
		fputs("에러! 옵션을 입력하지 않으셨군요...\n", stderr);
		exit(1);
	}


	// 옵션 개수 출력
	printf("%d 개의 옵션을 입력하셨군요\n\n", argc - 1);


	// 옵션 배열의 요소들을 하나씩 출력
	for (int i = 1; i < argc; i++)
		printf("argv[%d] = %s\n", i, argv[i]);

	return 0;
}