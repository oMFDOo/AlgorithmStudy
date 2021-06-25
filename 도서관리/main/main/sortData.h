#include "bookData.h"

// ��������, ����, �Ⱓ��, å�̸�, �۰�, ���ǻ�
/*

	����
		- ����? ����?
			- ���� : ������, ������, ����
			- ���� : ����, ������ (����)

		- ������ �� �Լ�
			- ���纻 ���� �ͼ� �ε����� �ε���
			- �ε��� ��ȯ

		- ������ ���� �Լ�
			- �ּҰ��� ���� ����
			- å�̸�	(string)
			- �۰�	(string)
			- ��������(int)
			- �Ⱓ��	(int)
			- ����	(int)

*/


void changeValue(int);

// ��� �߰��� �����ż� �� ���� ������ ���� ��� �ؿ�?
void sortPageDown(int size) {

	// for�� ũ�� : checkOverflow
	// ���� üũ : presenceOfInfo
	// �� ���� : �ε��� ����!

	for (int i = 0; i < size; i++) {
		int temp = 0;
		for (int k = 0; k < size; ++k) {
			for (int a = 0; a < size - 1; ++a) {
				if (!presenceOfInfo[a + 1] || !presenceOfInfo[a]) {
					continue;
				}
				if (LB[a + 1].page > LB[a].page) {
					changeValue(a);
				}
			}
		}
	}
}

void sortPageUp(int size) {

	// for�� ũ�� : checkOverflow
	// ���� üũ : presenceOfInfo
	// �� ���� : �ε��� ����!

	for (int i = 0; i < size; i++) {
		int temp = 0;
		for (int k = 0; k < size; ++k) {
			for (int a = 0; a < size - 1; ++a) {
				if (!presenceOfInfo[a + 1] || !presenceOfInfo[a]) {
					continue;
				}
				if (LB[a + 1].page < LB[a].page) {
					changeValue(a);
				}
			}
		}
	}
}

void sortPriceDown(int size) {

	// for�� ũ�� : checkOverflow
	// ���� üũ : presenceOfInfo
	// �� ���� : �ε��� ����!

	for (int i = 0; i < size; i++) {
		int temp = 0;
		for (int k = 0; k < size; ++k) {
			for (int a = 0; a < size - 1; ++a) {
				if (!presenceOfInfo[a + 1] || !presenceOfInfo[a]) {
					continue;
				}
				if (LB[a + 1].price > LB[a].price) {
					changeValue(a);
				}
			}
		}
	}
}

void sortPriceUp(int size) {

	// for�� ũ�� : checkOverflow
	// ���� üũ : presenceOfInfo
	// �� ���� : �ε��� ����!

	for (int i = 0; i < size; i++) {
		int temp = 0;
		for (int k = 0; k < size; ++k) {
			for (int a = 0; a < size - 1; ++a) {
				if (!presenceOfInfo[a + 1] || !presenceOfInfo[a]) {
					continue;
				}
				if (LB[a + 1].price < LB[a].price) {
					changeValue(a);
				}
			}
		}
	}
}



void sortString(int size) {

	for (int i = 0; i < size; i++) {
		int temp = 0;
		for (int k = 0; k < size; ++k) {
			for (int a = 0; a < size - 1; ++a) {
				if (!presenceOfInfo[a + 1] || !presenceOfInfo[a]) {
					continue;
				}
				if (LB[a].name.compare(LB[a + 1].name) > 0) {
					changeValue(a);
				}
			}
		}
	}
}

// ��������, ����, �Ⱓ��, å�̸�, �۰�, ���ǻ�
void changeValue(int index) {
	std::string tempS;
	int tempI;

	// ������ �� ��ü
	tempI = LB[index].page;
	LB[index].page = LB[index + 1].page;
	LB[index + 1].page = tempI;

	// ���� �� ��ü
	tempI = LB[index].price;
	LB[index].price = LB[index + 1].price;
	LB[index + 1].price = tempI;

	// �Ⱓ�� �� ��ü
	tempI = LB[index].publicationDate;
	LB[index].publicationDate = LB[index + 1].publicationDate;
	LB[index + 1].publicationDate = tempI;

	// å�̸� �� ��ü
	tempS = LB[index].name;
	LB[index].name = LB[index + 1].name;
	LB[index + 1].name = tempS;

	// �۰� �� ��ü
	tempS = LB[index].author;
	LB[index].author = LB[index + 1].author;
	LB[index + 1].author = tempS;
}

