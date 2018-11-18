#include <iostream>
using namespace std;

// 1시간 = 60분
// 24시간 = 1440분
// 깃허브에 올리니 한글이 깨져서 수정함!

int main() {
	int test_case;
	int T;
	int pprday = 11;
	int pprhour = 11;
	int pprminute = 11;
	int day = 0;
	int hour = 0;
	int minute = 0;
	int result;
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case) {
		
		cin >> day >> hour >> minute;
		
		if (pprday == day && pprhour > hour) {
			//result = -1;
			cout << "#" << test_case << " " << -1;
		}
		else {
			day -= pprday;
			day *= 1440;
			hour -= pprhour;
			hour *= 60;
			minute -= pprminute;

			result = day + hour + minute;
			cout << "#" << test_case << " " << result;
			
		}
				
		cout << endl;
	}
}