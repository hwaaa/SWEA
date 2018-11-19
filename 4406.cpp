#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
	int test_case;
	int T;
	string input;
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case) {

		cin >> input;
		cout << "#" << test_case << " ";
		for (int i = 0; i < input.size(); i++) {
			if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u') {
				continue;
			}
			else {
				cout << input[i];
			}
		}
		cout << endl;
	}
}