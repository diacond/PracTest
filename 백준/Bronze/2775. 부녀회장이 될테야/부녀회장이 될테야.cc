#include <iostream>
using namespace std;

int getAddr(int x, int y) {
	if (y == 1) {	
		return 1;
	}
	else if (x == 0) {
		return y;
	}
	else {
		return (getAddr(x - 1, y) + getAddr(x, y - 1));
	}
}

int main() {
	int T, k, n;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> k >> n;
		cout << getAddr(k, n) << endl;
	}
}