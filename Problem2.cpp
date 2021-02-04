#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

bool judge_letter(char c) {
	if (c == 'H' || c == 'I' || c == 'N' || c == 'O' || c == 'S' || c == 'X' || c == 'Z') {
		return true;
	}
	return false;
}

bool judge_string(string s) {
	for (int i = 0; i < s.size(); i++) {
		if (judge_letter(s[i])) {
			continue;
		}
		else {
			return false;
		}
	}
	return true;
}

int main() {
	string s;
	cin >> s;

	if (judge_string(s)) {
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}

	return 0;
}