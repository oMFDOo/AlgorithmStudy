#include <iostream>
#pragma warning (disable : 4996)
using namespace std;

long fac(long i) {
	if (i == 0) return 1;
	if (i == 1) return i;
	return i *= fac(i - 1);
}

int main() {
	long input;
	cin >> input;
	long output = fac(input);
	cout << output;
}