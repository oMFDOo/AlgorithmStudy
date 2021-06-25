#include <iostream>
#include <algorithm>
using namespace std;

int input, box[1000000] = { 0 };
int main() {
	cin >> input;
	for (int i = 0; i < input; i++) {
		cin >> box[i];
	}
	std::stable_sort(box, box + input);
	for (int i = 0; i < input; i++) {
		cout << box[i] << endl;
	}
}