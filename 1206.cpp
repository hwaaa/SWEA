#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int building[1000];
int ans[1000];
int main() {

	for (int test_case = 1; test_case <= 10; ++test_case) {

		int row;
		cin >> row;

		for (int i = 0; i < row; i++) {

			cin >> building[i];
		}

		int real_ans = 0;
		for (int i = 2; i < row - 2; i++) {

			int temp = 0;

			if (building[i - 2] >= building[i] || building[i - 1] >= building[i] || building[i + 1] >= building[i] || building[i + 2] >= building[i]) {
				continue;
			}
			else {
				int temp1 = max(building[i - 2], building[i - 1]);
				int temp2 = max(building[i + 1], building[i + 2]);
				if (temp1 > temp2)	temp = temp1;
				else if (temp1 == temp2)	temp = temp1;
				else
				{
					temp = temp2;
				}
				//ans[i] = temp;
			}
			//if (ans[i] != 0) {
			//temp = building[i] - ans[i];
			//}
			real_ans += (building[i] - temp);
			//real_ans += temp;
		}

		cout << "#" << test_case << " " << real_ans << endl;
	}

}