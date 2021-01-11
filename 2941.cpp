#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main() {
	int cnt = 0;
	string s;
	cin >> s;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '-') {
			cnt--;
		}
		else if (s[i] == '=') {
			if (i > 1 && s[i - 1] == 'z' && s[i - 2] == 'd') {
				cnt--;
			}
			cnt--;
		}
		else if (s[i] == 'j' && i > 0) {
			if (s[i - 1] == 'n' || s[i - 1] == 'l') {
				cnt--;
			}
		}
		cnt++;
	}

	cout << cnt << endl;

	return 0;
}