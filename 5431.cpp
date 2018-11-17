#include <iostream>
using namespace std;

int main() {
	int test_case;
	int T;
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case) {
		int people, hw;
		cin >> people >> hw;

		int hwvec[100] = { 0, };
		for (int i = 0; i < hw; i++) {
			int inputhw;
			cin >> inputhw;
			hwvec[inputhw] = 1;
		}

		cout << "#" << test_case << " ";

		for (int i = 1; i <= people; i++) {
			if (hwvec[i] == 0) {
				cout << i << " ";
			}
		}
		cout << endl;
	}
	return 0;
}