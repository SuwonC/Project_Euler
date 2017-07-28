#include <iostream>

using namespace std;

int pibo(int i = 0) {
	if (i <= 1) return 1;
	return pibo(i - 2) + pibo(i - 1);
}

int main(void) {
	int temp = 0, last = 0, i = 0;
	while (last < 4000000) {
		last = pibo(++i);
		if (last % 2 == 0) temp += last;
	}
	cout << temp;
}
