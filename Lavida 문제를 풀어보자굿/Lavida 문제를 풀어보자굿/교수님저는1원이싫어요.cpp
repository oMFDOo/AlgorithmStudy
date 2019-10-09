//#include <stdio.h>
//#include <string.h>
//#include <random>
//#include <time.h>
//#pragma warning (disable : 4996)
//
///*
//
//=============================
//학과 : 창의소프트웨어공학부
//학번 : 20193148
//분반 : 2분반
//이름 : 황진주
//제출 일자 : 19.09.30
//=============================
//
//*/
//
//int countMenu[5];
//
//// 구분선 출력
//void printDividingLine() {
//	printf("\n\n");
//	for (int i = 0; i < 60; i++) {
//		printf("=");
//	}
//	printf("\n\n");
//}
//
//// 메뉴 출력
//void printMenu() {
//	printDividingLine();
//	printf("\t\t<<< 정보관 식당 메뉴 >>>\n\n");
//	printf("\t\t    1. 라면 (1500) \n");
//	printf("\t\t    2. 라면밥 (2000) \n");
//	printf("\t\t    3. 돈까스 (3000) \n");
//	printf("\t\t    4. 부대찌개 (3500) \n");
//	printDividingLine();
//}
//
//// 메뉴 선택 및 가격 리턴
//int selectMenu() {
//	while(true) {
//		char inputMenu[30] = { 0 };
//		printf("\t주문할 메뉴의 번호 혹은 이름을 입력해주세요 >> ");
//		scanf("%s", inputMenu);
//		printf("\n\n");
//		if (strcmp(inputMenu, "라면") == 0 || strcmp(inputMenu, "1") == 0) {
//			return 1500;
//		}
//		else if (strcmp(inputMenu, "라면밥") == 0 || strcmp(inputMenu, "2") == 0) {
//			return 2000;
//		}
//		else if (strcmp(inputMenu, "돈까스") == 0 || strcmp(inputMenu, "3") == 0) {
//			return 3000;
//		}
//		else if (strcmp(inputMenu, "부대찌개") == 0 || strcmp(inputMenu, "4") == 0) {
//			return 3500;
//		}
//		else {
//			printf("올바른 형식의 메뉴를 입력해주세요.");
//			printDividingLine();
//		}
//	}
//}
//
//// 선택한 메뉴의 갯수 입력
//int returnPrice(int price) {
//	int numberOfDish = 0;
//	printf("\n\n\t메뉴의 갯수를 입력해주세요 >> ");
//	scanf("%d", &numberOfDish);
//	if (numberOfDish < 1) {
//		numberOfDish *= -1;
//	}
//	return numberOfDish * price;
//}
//
//// 추가 주문 여부 확인
//int checkNextOrder() {
//	while (true) {
//		printDividingLine();
//		char check[50] = { 0 };
//		printf("\n\n\t추가 주문을 하시겠습니까? (Y / N) >> ");
//		scanf("%s", check);
//
//		if (strcmp(check, "Y") == 0 || strcmp(check, "y") == 0) {
//			return 1;
//		}
//		else if (strcmp(check, "N") == 0 || strcmp(check, "n") == 0) {
//			printDividingLine();
//			return 0;
//		}
//		else {
//			printf("\n\n\t올바른 형식의 답변을 입력해주세요.");
//		}
//		printDividingLine();
//	}
//}
//
//// 총 가격 출력
//void printResultPrice(int price) {
//	printf("결제하실 금액은 %d원 입니다.", price);
//	printDividingLine();
//}
//
//// 금액 투입
//int inputMoney(int price) {
//	
//	int input = 0;
//	while (true) {
//		printf("\t결제할 금액을 투입해주세요. >> ");
//		int temp;
//		scanf("%d", &temp);
//
//		if (temp < 1) {
//			temp *= -1;
//		}
//
//		printf("\n\n");
//		input += temp;
//		if (input < price) {
//			printf("\t\t\t투입한 금액 : %d\n\n\t\t\t 총 투입 금액 : %d\n\n\t\t\t 남은 금액 : %d\n\n", temp, input, price-input);
//		}
//		else {
//			printf("\t\t\t투입한 금액 : %d\n\n\t\t\t 총 투입 금액 : %d\n\n", temp, input);
//			return input - price;
//		}
//	}
//}
//
//// 거스름돈 계산
//void calculateChange(int change) {
//	int temp;
//	int money[] = {50000, 10000, 5000, 1000, 500, 100, 50, 10, 1};
//
//	temp = change;
//	printDividingLine();
//	printf("\t\t아래의 거스름돈이 출력됩니다.\n\n");
//
//	for (int i = 0; i < sizeof(money) / sizeof(int); i++) {
//		if (temp / money[i]) {
//			printf("\t>> %d원 : %d개\n", money[i], temp / money[i]);
//			temp %= money[i];
//		}
//	}
//
//	srand(time(NULL));
//	int orderNumber = rand()%100+1;
//
//	printf("\n\n\t\t    주문번호는 %d번입니다.\n", orderNumber);
//	printDividingLine();
//}
//
//
//int main() {
//	countMenu[5] = {0};
//	//  nextOrder : 추가 주문 확인용
//	int nextOrder = 1, price = 0, change = 0;
//
//	while (nextOrder) {
//		int inputMenu;
//		printMenu();
//		
//		inputMenu = selectMenu();			// 메뉴 선택		:		메뉴의 가격을 리턴
//		price += returnPrice(inputMenu);	// 총 가격		:		(메뉴의 갯수 X 가격) 값 리턴
//		nextOrder = checkNextOrder();		// 추가 주문 여부	:		참, 거짓 
//	}
//	printResultPrice(price);				// 메뉴 출력		:		메뉴 이름 / 그 갯수 / 갯수에 따른 가격 / 총가격 출력
//	change = inputMoney(price);				// 금액 투입		:		거스름돈 리턴
//	calculateChange(change);				// 거스름돈 계산	:		거스름돈 갯수 계산 및 출력
//
//}