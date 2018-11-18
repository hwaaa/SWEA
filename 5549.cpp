#include <iostream>
#include <cstring>
using namespace std;


int main() {
	int test_case;
	int T;
	char num[102];
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case) {

		cin >> num;
		int len = strlen(num);
		if (num[len - 1] % 2 == 0) {
			cout << "#" << test_case << " " << "Even";
		}
		else {
			cout << "#" << test_case << " " << "Odd";
		}
		cout << endl;
	}
}