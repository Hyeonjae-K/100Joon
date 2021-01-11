#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int abc_to_num(char c) {
	if ('A' <= c && c <= 'C') {
		return 3;
	}
	else if (c <= 'F') {
		return 4;
	}
	else if (c <= 'I') {
		return 5;
	}
	else if (c <= 'L') {
		return 6;
	}
	else if (c <= 'O') {
		return 7;
	}
	else if (c <= 'S') {
		return 8;
	}
	else if (c <= 'V') {
		return 9;
	}
	else if (c <= 'Z') {
		return 10;
	}
	else {
		return 11;
	}
}

int main() {
	int time = 0;
	string s;
	cin >> s;

	for (int i = 0; i < s.size(); i++) {
		time += abc_to_num(s[i]);
	}

	cout << time << endl;

	return 0;
}