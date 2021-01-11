#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define SIZE 26

using namespace std;

string input() {
	string s;
	cin >> s;

	return s;
}

void check(string s) {
	int A[SIZE];
	for (int i = 0; i < SIZE; i++) {
		A[i] = -1;
	}

	for (int i = 0; i < s.size(); i++) {
		int index = s[i] - 'a';
		if (A[index] == -1) {
			A[index] = i;
		}
	}

	for (int i = 0; i < SIZE; i++) {
		cout << A[i] << " ";
	}
}

int main() {
	string s;
	s = input();
	check(s);

	return 0;
}