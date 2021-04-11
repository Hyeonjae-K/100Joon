#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;

void input(vector<int>& v) {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		v.push_back(t);
	}
}

void merge(vector<int>& v, int start, int end, int mid) {
	int high, low;
	vector<int> tmp;
	high = mid + 1;
	low = start;

	while (low <= mid && high <= end) {
		if (v[low] < v[high]) {
			tmp.push_back(v[low++]);
		}
		else {
			tmp.push_back(v[high++]);
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

void merge_sort(vector<int>& v, int start, int end) {
	if (start < end) {
		int mid = (start + end) / 2;
		merge_sort(v, start, mid);
		merge_sort(v, mid + 1, end);
		merge(v, start, end, mid);
	}
}

void print(vector<int> v) {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << "\n";
}

int main() {
	vector<int> v;

	input(v);
	merge_sort(v, 0, v.size() - 1);
	print(v);

	return 0;
}