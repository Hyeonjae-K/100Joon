#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int larger_string(string a, string b) {
	if (a.size() > b.size()) {
		return a.size();
	}
	return b.size();
}

string cal_string(string A, string B) {
	string result;
	int max = larger_string(A, B);
	int t = 0;

	for (int i = 1; i <= max + 1; i++) {
		int a = 0, b = 0;
		if (i <= A.size()) {
			a = A[A.size() - i] - '0';
		}
		if (i <= B.size()) {
			b = B[B.size() - i] - '0';
		}

		if (t != 0) {
			result.push_back('0' + (a + b + 1) % 10);
			if (a + b + 1 >= 10) {
				continue;
			}
			else {
				t = 0;
			}
		}
		else {
			result.push_back('0' + (a + b) % 10);
			if (a + b >= 10) {
				t = 1;
			}
		}
	}

	return result;
}

void print_reverse(string a) {
	for (int i = a.size() - 1; i >= 0; i--) {
		cout << a[i];
	}
	cout << endl;
}

int main() {
	string A, B, R;
	cin >> A >> B;
	R = cal_string(A, B);
	print_reverse(R);

	return 0;
}