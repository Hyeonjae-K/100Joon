#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

int main() {
	int cnt = 1;
	string s;
	getline(cin, s);

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ' ') {
			cnt++;
		}
	}
	if (s[0] == ' ') {
		cnt--;
	}
	if (s[s.size() - 1] == ' ') {
		cnt--;
	}

	cout << cnt << endl;

	return 0;
}