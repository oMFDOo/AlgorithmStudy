//#include <iostream>
//using namespace std;
//
//int fibo(int n1, int n2, int i) {
//	if (i == 0) return n1 + n2;
//	int temp = n2;
//	n2 = n1 + n2;
//	n1 = temp;
//
//	int n3 = 0;
//	n3 += fibo(n1, n2, i - 1);
//	return n3;
//}
//
//int main() {
//	int input, output;
//	cin >> input;
//	if (input >= 2)
//		output = fibo(0, 1, input - 2);
//	else if (input == 1) output = 1;
//	else output = 0;
//	cout << output;
//}