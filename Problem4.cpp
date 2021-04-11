#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;

typedef struct Friends {
	int from, to;
};

void input(vector<int>& v1, vector<Friends>& v2) {
	int n, t;
	cin >> n >> t;

	for (int i = 0; i < n; i++) {
		int m;
		cin >> m;
		v1.push_back(m);
	}
	for (int i = 0; i < t; i++) {
		Friends f;
		cin >> f.from >> f.to;
		v2.push_back(f);
	}
}

bool pay(vector<int> v1, vector<Friends> v2) {
	for (int i = 0; i < v2.size(); i++) {
		v1[v2[i].to] += v1[v2[i].from];
		v1[v2[i].from] = 0;
	}
	for (int i = 0; i < v1.size(); i++) {
		if (v1[i] != 0) {
			return false;
		}
	}
	return true;
}

int main() {
	vector<int> money;
	vector<Friends> friends;

	input(money, friends);
	if (pay(money, friends)) {
		cout << "POSSIBLE\n";
	}
	else {
		cout << "IMPOSSIBLE\n";
	}

	return 0;
}