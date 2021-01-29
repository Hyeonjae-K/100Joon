#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;

void input(int& n, vector<string>& v) {
	cin >> n;

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		v.push_back(s);
	}
}

void merge(vector<string>& v, int start, int end, int mid) {
	int high, low;
	vector<string> tmp;
	high = mid + 1;
	low = start;

	while (low <= mid && high <= end) {
		if (v[low].size() < v[high].size()) {
			tmp.push_back(v[low++]);
		}
		else if (v[low].size() > v[high].size()) {
			tmp.push_back(v[high++]);
		}
		else {
			if (v[low] == v[high]) {
				tmp.push_back(v[low++]);
			}
			else {
				for (int i = 0; v[low].size(); i++) {
					if (v[low][i] != v[high][i]) {
						if (v[low][i] < v[high][i]) {
							tmp.push_back(v[low++]);
						}
						else {
							tmp.push_back(v[high++]);
						}
						break;
					}
				}
			}
		}
	}

	if (low <= mid) {
		for (int i = low; i <= mid; i++) {
			tmp.push_back(v[i]);
		}
	}
	else {
		for (int i = high; i <= end; i++) {
			tmp.push_back(v[i]);
		}
	}

	for (int i = start; i <= end; i++) {
		v[i] = tmp[i - start];
	}
}

void merge_sort(vector<string>& v, int start, int end) {
	if (start < end) {
		int mid = (start + end) / 2;
		merge_sort(v, start, mid);
		merge_sort(v, mid + 1, end);
		merge(v, start, end, mid);
	}
}

void print(vector<string> v) {
	for (int i = 0; i < v.size(); i++) {
		if (i + 1 < v.size() && v[i] == v[i + 1]) {
			continue;
		}
		cout << v[i] << "\n";
	}
}

int main() {
	int n;
	vector<string> v;

	input(n, v);
	merge_sort(v, 0, n - 1);
	print(v);

	return 0;
}