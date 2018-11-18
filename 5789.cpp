#include <iostream>
using namespace std;


int main() {
	int test_case;
	int T;
	int N, Q, L, R;
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case) {
		int box[1000] = { 0, };
		cin >> N >> Q;

		for (int j = 1; j <= Q; j++) {
			cin >> L >> R;
			for (int k = L; k <= R; k++) {
				box[k] = j;
			}
		}
		cout << "#" << test_case << " ";

		for (int i = 1; i <= N; i++) {
			cout << box[i] << " ";
		}
			
		cout << endl;
	}
	return 0;
}