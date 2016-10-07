#include <iostream>
using namespace std;

int main() {
	const int N = 10000;
	bool tree[N];
	for (int i = 0; i < N; i++) {
		tree[i] = true;
	}
	int L, M;
	cin >> L >> M;
	for (int i = 0; i < M; i++) {
		int begin, end;
		cin >> begin >> end;
		for (int j = begin; j <= end; j++) {
			tree[j] = false;
		}
	}
	int count = 0;
	for (int i = 0; i <= L; i++) {
		if (tree[i]) {
			count++;
		}
	}
	cout << count;
}
