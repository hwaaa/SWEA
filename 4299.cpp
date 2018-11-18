#include <iostream>
using namespace std;

<<<<<<< HEAD
// 1½Ã°£ = 60ºÐ
// 24½Ã°£ = 1440ºÐ
// ±êÇãºê¿¡ ¿Ã¸®´Ï ÇÑ±ÛÀÌ ±úÁ®¼­ ¼öÁ¤ÇÔ!
// ¿Ö.. ¾ÈµÇÁö..
=======
// 1ì‹œê°„ = 60ë¶„
// 24ì‹œê°„ = 1440ë¶„
// ê¹ƒí—ˆë¸Œì— ì˜¬ë¦¬ë‹ˆ í•œê¸€ì´ ê¹¨ì ¸ì„œ ìˆ˜ì •í•¨!
>>>>>>> 3af61476c733ca9543f2426304bd64601d8af906

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
