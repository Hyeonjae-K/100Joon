#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int r;
		string s;
		cin >> r >> s;

		for (int j = 0; s[j] != '\0'; j++) {
			for (int k = 0; k < r; k++) {
				cout << s[j];
			}
		}

		cout << endl;
	}

	return 0;
}