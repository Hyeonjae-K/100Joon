#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

bool word_checker(string s) {
	bool checkArr[26] = { false };

	for (int i = 0; i < s.size(); i++) {
		int index = s[i] - 'a';
		if (checkArr[index] == false) {
			checkArr[index] = true;
		}
		else {
			if (s[i] != s[i - 1]) {
				return false;
			}
		}
	}

	return true;
}

int main() {
	int n, cnt = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;

		if (word_checker(s)) {
			cnt++;
		}
	}

	cout << cnt << endl;

	return 0;
}