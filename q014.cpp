#include <iostream>
#include <math.h>

using namespace std;

bool isSosu(int i) {
	bool temp = true;
	for (int k = 2; k < i; k++) {
		if (i%k == 0) temp = false;
	}
	return temp;
}

int rock(int k) {
	int c = 0;
	__int64 now = k;
	while (now != 1) {
		if (now < 0) {
			cout << k << "번째 값인 Now(" << now << ") 값이 0 이하로 내려갔습니다..." << endl;
			break;
		}
		if (now % 2 == 0) now = now / 2;
		else now = now * 3 + 1;
		c++;
	}
	return c;
}

int main(void) {
	int now = 0, tp = 0;
	for (int i = 1; i <= 1000000; i++) {
		int c = rock(i);
		if (tp < c) {
			cout << "New Record! " << i << "님이 " << tp << "회를 깬 " << c << "회 달성!" << endl;
			tp = c;
			now = i;
		} else if (c >= 400) {
			cout << i << "님이 400회는 넘었지만 " << c << "회이기 때문에 기록을 경신하지 못하였습니다..." << endl;
		}
	}
	cout << now << " / " << tp;
	return 0;
}
