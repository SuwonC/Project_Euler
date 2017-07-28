#include <iostream>

using namespace std;

int main(void) {
	int temp = 0;
	for (int i = 1; i < 1000; i++) {
		temp += i % 3 == 0 || i % 5 == 0 ? i : 0;
	}
	cout << temp;
}
