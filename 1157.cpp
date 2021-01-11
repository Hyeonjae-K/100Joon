#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main() {
	int A[26] = { 0 }, maxCnt = 0, maxIndex;
	string s;
	cin >> s;

	for (int i = 0; i < s.size(); i++) {
		int index;
		if ('A' <= s[i] && s[i] <= 'Z') {
			index = s[i] - 'A';
		}
		else {
			index = s[i] - 'a';
		}
		A[index]++;

		if (A[index] > maxCnt) {
			maxCnt = A[index];
			maxIndex = index;
		}
		else if (maxCnt == A[index]) {
			maxIndex = -1;
		}
	}

	if (maxIndex == -1) {
		printf("?\n");
	}
	else {
		printf("%c", 'A' + maxIndex);
	}

	return 0;
}