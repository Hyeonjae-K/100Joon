#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;

void input(int& m, vector<int>& v) {
	int n;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		v.push_back(t);
	}
}

void merge_sort(vector<int>& v, int start, int end) {
	if (start < end) {

	}
}

int main() {
	int m;
	vector<int> v;

	input(m, v);

	return 0;
}