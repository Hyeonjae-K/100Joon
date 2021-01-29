#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;

void input(int& n, vector<vector<int>>& v) {
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int x, y;
		vector<int> tmp;
		scanf("%d %d", &x, &y);
		tmp.push_back(x);
		tmp.push_back(y);
		v.push_back(tmp);
	}
}

void merge(vector<vector<int>>& v, int start, int end, int mid) {
	int high, low;
	vector<vector<int>> tmp;
	high = mid + 1;
	low = start;

	while (low <= mid && high <= end) {
		if (v[low][1] < v[high][1]) {
			tmp.push_back(v[low++]);
		}
		else if (v[low][1] > v[high][1]) {
			tmp.push_back(v[high++]);
		}
		else {
			if (v[low][0] < v[high][0]) {
				tmp.push_back(v[low++]);
			}
			else {
				tmp.push_back(v[high++]);
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

void merge_sort(vector<vector<int>>& v, int start, int end) {
	if (start < end) {
		int mid = (start + end) / 2;
		merge_sort(v, start, mid);
		merge_sort(v, mid + 1, end);
		merge(v, start, end, mid);
	}
}

void print(vector<vector<int>> v) {
	for (int i = 0; i < v.size(); i++) {
		printf("%d %d\n", v[i][0], v[i][1]);
	}
}

int main() {
	int n;
	vector<vector<int>> v;

	input(n, v);
	merge_sort(v, 0, n - 1);
	print(v);

	return 0;
}