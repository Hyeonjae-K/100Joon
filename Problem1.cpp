#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;

void input(vector<int>& v) {
	int n;
	while (cin >> n) {
		v.push_back(n);
	}
}

void print_result(vector<int> v) {
	for (int i = 0; i <= v.size() - 4; i++) {
		int upCnt, downCnt, flatCnt;
		upCnt = 0;
		downCnt = 0;
		flatCnt = 0;

		for (int j = i; j < i + 3; j++) {
			if (v[j] < v[j + 1]) {
				upCnt++;
			}
			else if (v[j] > v[j + 1]) {
				downCnt++;
			}
			else {
				flatCnt++;
			}
		}

		if (upCnt == 3) {
			cout << "Uphill\n";
			return;
		}
		else if (downCnt == 3) {
			cout << "Downhill\n";
			return;
		}
		else if (flatCnt == 3) {
			cout << "Flat Land\n";
			return;
		}
	}

	cout << "Unknown\n";
}

int main() {
	vector<int> v;

	input(v);
	print_result(v);

	return 0;
}