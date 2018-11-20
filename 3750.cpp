#include<iostream>
#include <stdio.h>
#include<algorithm>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	scanf("%d", &T);

	for (test_case = 1; test_case <= T; ++test_case)
	{
		long long int num = 0;
		long long int ans;

		scanf("%ld", &num);

		while (1) {
			ans = 0;
			while (1) {
				ans += num % 10;
				num /= 10;
				if (num == 0) break;
			}
			if (ans >= 10)	num = ans;
			else	break;
		}
		printf("#%d %d\n", test_case, ans);
	}
	return 0;
}