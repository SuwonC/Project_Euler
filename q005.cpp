#include <iostream>
#include <math.h>

using namespace std;

int main(void) {
	int tmp1 = 0, tmp2 = 0;
	for (int i = 1; i <= 100; i++) {
		tmp1 += pow(i, 2);
		tmp2 += i;
	}
	printf("%f", pow(tmp2, 2) - tmp1);
}
