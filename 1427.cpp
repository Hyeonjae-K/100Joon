#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main() {
	string sNum;
	cin >> sNum;

	for (char digit = '9'; digit >= '0'; digit--) {
		for (int i = 0; i < sNum.size(); i++) {
			if (sNum[i] == digit) {
				cout << digit;
			}
		}
	}

	return 0;
}