//#include <iostream>
//using namespace std;
//
//// ���м� ���
//void printDividingLine() {
//	cout << "\n\n";
//	for (int i = 0; i < 50; i++) {
//		cout << "=";
//	}
//	cout << "\n\n";
//}
//
//// �޴����
//void printMenu() {
//	printDividingLine();
//	cout << "<<<< ������ �޴� ��� >>>>\n\n";
//	cout << "\t 1.¥��� 5000�� " << endl;
//	cout << "\t 2.��¥�� 6000�� " << endl;
//	cout << "\t 3.¥�� + ��¥�� 6500�� " << endl;
//	cout << "\t 4.����¥�� 8000�� " << endl;
//	printDividingLine();
//}
//
//// �޴� ����
//int inputMenu() {
//	int num;
//	cout << "�޴��� ��ȣ�� �Է����ּ��� : ";
//	cin >> num;
//	printDividingLine();
//	return num;
//}
//
//// �޴� ���� �Ǻ�
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
//// �� ����
//int inputMoney() {
//	cout << "���� �������ּ���.";
//	int price;
//	cin >> price;
//	printDividingLine();
//
//	return price;
//}
//
//// �Ž����� ���
//void change(int price, int inputPrice) {
//	int changeBox[] = { 50000,10000,5000,1000,500,100,50,10 };
//	int temp = inputPrice - price;
//	cout << "������ �Ž������� ��µ˴ϴ�.\n\n";
//	if (inputPrice > price) {
//		for (int i = 0; i < sizeof(changeBox) / sizeof(int); i++) {
//			if (temp / changeBox[i]) {
//				cout << changeBox[i] << "�� " << temp / changeBox[i] << "��\n\n";
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