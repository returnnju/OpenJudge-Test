#include <iostream>
using namespace std;

int main() {
	int n = 0;
	cin >> n;
	while (n--) {
		int number = 0;
		cin >> number;
		if (number < 2 || number % 2 != 0) {
			cout << 0 << " " << 0;
		}
		else {
			if (number % 4 == 0) {
				cout << number / 4 << " " << number / 2;
			}
			else {
				cout << number / 4 + 1 << " " << number / 2;
			}
		}
		cout << endl;
	}
}
