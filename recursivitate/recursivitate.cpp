#include <iostream>
using namespace std;


int EveryNumberUntil(int n) {
	if (n == 0) {
		return 0;
	}

	else {
		EveryNumberUntil(n-1);
		cout << n << " ";
	}
}

int EveryNumberUntilB(int n, int m) {
	if (n == m) return 0;

	if (n < m) {
		EveryNumberUntilB(++n,m);
		cout << n << " ";
	}

	if (n > m) {
		EveryNumberUntilB(n, ++m);
		cout << m << " ";
	}

	return 0;
}

int sumOf(int n) {
	if (n == 0) return 0;

	if (n != 0) {
		return (n % 10) + sumOf(n / 10);
	}
}

void exponentof2(int n) {
	if (n == 2) {

		cout << "YES" << endl;
	}


	if (n < 2) {
		cout << "NO" << endl;
	}

	if (n > 2) {
		return exponentof2(n / 2);
	}

}

void leftToRight(int n) {
	int c;
	if (n != 0) {
		leftToRight(n / 10);
		c = n % 10;
		cout << c << " ";
	}
}

void rightToleft(int n) {
	int c;

	if (n != 0) {
		c = n % 10;
		cout << c << " ";
		rightToleft(n /= 10);
	}
}

int main() {

	return 0;
}
