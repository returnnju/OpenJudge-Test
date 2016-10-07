#include <iostream>
#include <cassert>
using namespace std;

int main() {
	int n;
	cin >> n;
	assert(0 <= n && n <= 20);
	for (int k = 0; k < n; k++) {
		char begin[5], end[5];
		cin >> begin >> end;
		int heigth = abs(begin[0] - end[0]);
		int width = abs(begin[1] - end[1]);
		//cout << begin << end << endl;
		if (heigth == 0 && width == 0) {
			cout << "0 0 0 0" << endl;
			return 0;
		}
		if (heigth > width) {
			cout << heigth;
		}
		else {
			cout << width;
		}

		if (heigth == width || heigth == 0 || width == 0) {
			cout << " " << 1;
		}
		else {
			cout << " " << 2;
		}

		if (heigth == 0 || width == 0) {
			cout << " " << 1;
		}
		else {
			cout << " " << 2;
		}

		if (heigth == width) {
			cout << " " << 1;
		}
		else {
			cout << " Inf";
		}
		
		cout << endl;
	}
	
	return 0;
}
