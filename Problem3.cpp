#define _CRT_SECURE_NO_WARNINGS
#define MAX_SIZE 1000000
#define MAX(a, b) (a > b ? a: b)
#include <iostream>
#include <vector>

using namespace std;
bool A[MAX_SIZE] = { false };

void input(vector<int>& v) {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		v.push_back(t);
	}
}

int count_line(vector<int> v) {
	int longest = 1;

	for (int i = 0; i < v.size(); i++) {
		if (A[v[i]] == false) {
			int cnt = 1;
			A[v[i]] = true;

			for (int j = 0; j < v.size() - 1; j++) {
				if (v[j] != v[i]) {
					if (v[j + 1] == v[i]) {
						if (j + 2 >= v.size()) {
							break;
						}
						else if (v[j] == v[j + 2]) {
							cnt++;
							j++;
							longest = MAX(longest, cnt);
						}
						else {
							cnt = 1;
						}
					}
					else {
						if (v[j] == v[j + 1]) {
							cnt++;
							longest = MAX(longest, cnt);
						}
						else {
							cnt = 1;
						}
					}
				}
			}

			if (cnt > longest) {
				longest = cnt;
			}
		}
	}

	return longest;
}

int main() {
	vector<int> v;

	input(v);
	cout << count_line(v);

	return 0;
}