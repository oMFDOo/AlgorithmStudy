#include <stdio.h>
#include <stdlib.h>  // exit()

int main(int argc, char* argv[]) {


	// �ɼ� �������� �ʾ��� �� ���� ����ϰ� ����
	if (argc == 1) {
		fputs("����! �ɼ��� �Է����� �����̱���...\n", stderr);
		exit(1);
	}


	// �ɼ� ���� ���
	printf("%d ���� �ɼ��� �Է��ϼ̱���\n\n", argc - 1);


	// �ɼ� �迭�� ��ҵ��� �ϳ��� ���
	for (int i = 1; i < argc; i++)
		printf("argv[%d] = %s\n", i, argv[i]);

	return 0;
}