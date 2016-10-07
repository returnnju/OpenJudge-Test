#include <iostream>
using namespace std;

int main() {
	int N, grade, sum = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> grade;
		sum += grade;
	}
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << 1.0*sum / N << endl;

}
