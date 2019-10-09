//#include <iostream>
//using namespace std;
//
//// 구분선 출력
//void printDividingLine() {
//	cout << "\n\n";
//	for (int i = 0; i < 50; i++) {
//		cout << "=";
//	}
//	cout << "\n\n";
//}
//
//// 메뉴출력
//void printMenu() {
//	printDividingLine();
//	cout << "<<<< 정보관 메뉴 목록 >>>>\n\n";
//	cout << "\t 1.짜장면 5000원 " << endl;
//	cout << "\t 2.간짜장 6000원 " << endl;
//	cout << "\t 3.짜장 + 간짜장 6500원 " << endl;
//	cout << "\t 4.탕간짜면 8000원 " << endl;
//	printDividingLine();
//}
//
//// 메뉴 선택
//int inputMenu() {
//	int num;
//	cout << "메뉴의 번호를 입력해주세요 : ";
//	cin >> num;
//	printDividingLine();
//	return num;
//}
//
//// 메뉴 가격 판별
//int claculatePrice(int menu) {
//
//	int price;
//
//	switch (menu)
//	{
//	case 1:
//		return 5000;
//	case 2:
//		return 6000;
//	case 3:
//		return 6500;
//	case 4:
//		return 8000;
//	}
//
//}
//
//// 돈 투입
//int inputMoney() {
//	cout << "돈을 투입해주세요.";
//	int price;
//	cin >> price;
//	printDividingLine();
//
//	return price;
//}
//
//// 거스름돈 계산
//void change(int price, int inputPrice) {
//	int changeBox[] = { 50000,10000,5000,1000,500,100,50,10 };
//	int temp = inputPrice - price;
//	cout << "다음의 거스름돈이 출력됩니다.\n\n";
//	if (inputPrice > price) {
//		for (int i = 0; i < sizeof(changeBox) / sizeof(int); i++) {
//			if (temp / changeBox[i]) {
//				cout << changeBox[i] << "원 " << temp / changeBox[i] << "개\n\n";
//				temp %= changeBox[i];
//			}
//		}
//	}
//	printDividingLine();
//}
//
//int main() {
//	printMenu();
//	int menu, price, inputPrice;
//
//	menu = inputMenu();
//	price = claculatePrice(menu);
//	inputPrice = inputMoney();
//	change(price, inputPrice);
//}