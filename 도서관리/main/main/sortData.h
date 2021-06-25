#include "bookData.h"

// 페이지수, 가격, 출간일, 책이름, 작가, 출판사
/*

	정렬
		- 오름? 내림?
			- 오름 : 가나다, 페이지, 가격
			- 내림 : 가격, 페이지 (미정)

		- 데이터 비교 함수
			- 복사본 가져 와서 인덱스로 인덱스
			- 인덱스 반환

		- 데이터 변경 함수
			- 주소값을 통해 변경
			- 책이름	(string)
			- 작가	(string)
			- 페이지수(int)
			- 출간일	(int)
			- 가격	(int)

*/


void changeValue(int);

// 목록 중간에 삭제돼서 빈 것이 있으면 소팅 어떻게 해요?
void sortPageDown(int size) {

	// for문 크기 : checkOverflow
	// 삭제 체크 : presenceOfInfo
	// 값 변경 : 인덱스 전송!

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

	// for문 크기 : checkOverflow
	// 삭제 체크 : presenceOfInfo
	// 값 변경 : 인덱스 전송!

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

	// for문 크기 : checkOverflow
	// 삭제 체크 : presenceOfInfo
	// 값 변경 : 인덱스 전송!

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

	// for문 크기 : checkOverflow
	// 삭제 체크 : presenceOfInfo
	// 값 변경 : 인덱스 전송!

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

// 페이지수, 가격, 출간일, 책이름, 작가, 출판사
void changeValue(int index) {
	std::string tempS;
	int tempI;

	// 페이지 값 교체
	tempI = LB[index].page;
	LB[index].page = LB[index + 1].page;
	LB[index + 1].page = tempI;

	// 가격 값 교체
	tempI = LB[index].price;
	LB[index].price = LB[index + 1].price;
	LB[index + 1].price = tempI;

	// 출간일 값 교체
	tempI = LB[index].publicationDate;
	LB[index].publicationDate = LB[index + 1].publicationDate;
	LB[index + 1].publicationDate = tempI;

	// 책이름 값 교체
	tempS = LB[index].name;
	LB[index].name = LB[index + 1].name;
	LB[index + 1].name = tempS;

	// 작가 값 교체
	tempS = LB[index].author;
	LB[index].author = LB[index + 1].author;
	LB[index + 1].author = tempS;
}

