/*#include <iostream>
using namespace std;

int main() {

	int H, M;
	int time;

	cin >> H >> M;
	cin >> time;

	H += time / 60;
	M += time % 60;

	if (M / 60 > 0) {
		H += M / 60;
		M = M % 60;
	}

	if (H > 23) {
		H -= 24;
	}

	cout << H << " " << M << endl;

	return 0;
}*/