#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;

typedef struct {
	int age, rank;
	string name;
}Info;

void input(int& n, vector<Info>& v) {
	cin >> n;

	for (int i = 0; i < n; i++) {
		Info tmp;
		cin >> tmp.age >> tmp.name;
		tmp.rank = i;
		v.push_back(tmp);
	}
}

void merge(vector<Info>& v, int start, int end, int mid) {
	int high, low;
	vector<Info> tmp;
	high = mid + 1;
	low = start;

	while (low <= mid && high <= end) {
		if (v[low].age < v[high].age) {
			tmp.push_back(v[low++]);
		}
		else if (v[low].age > v[high].age) {
			tmp.push_back(v[high++]);
		}
		else {
			if (v[low].rank < v[high].rank) {
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

void merge_sort(vector<Info>& v, int start, int end) {
	if (start < end) {
		int mid = (start + end) / 2;
		merge_sort(v, start, mid);
		merge_sort(v, mid + 1, end);
		merge(v, start, end, mid);
	}
}

void print(vector<Info> v) {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i].age << " " << v[i].name << "\n";
	}
}

int main() {
	int n;
	vector<Info> v;

	input(n, v);
	merge_sort(v, 0, n - 1);
	print(v);

	return 0;
}