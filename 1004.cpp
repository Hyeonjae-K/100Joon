#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

typedef struct {
	int x;
	int y;
}Location;

typedef struct {
	int x;
	int y;
	int r;
}Circle;

void input_location(Location& start, Location& end) {
	scanf("%d %d %d %d", &start.x, &start.y, &end.x, &end.y);
}

void input_circle(vector<Circle>& c) {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		Circle tmp;
		scanf("%d %d %d", &tmp.x, &tmp.y, &tmp.r);
		c.push_back(tmp);
	}
}

bool check_must(Location start, Location end, Circle c) {
	int stc = sqrt(pow(start.x - c.x, 2) + pow(start.y - c.y, 2));
	int etc = sqrt(pow(end.x - c.x, 2) + pow(end.y - c.y, 2));

	if ((stc > c.r && etc < c.r) || (stc < c.r && etc > c.r)) {
		return true;
	}

	return false;
}

int cal_cnt(Location start, Location end, vector<Circle> c) {
	int n = c.size(), cnt = 0;

	for (int i = 0; i < n; i++) {
		if (check_must(start, end, c[i])) {
			cnt++;
		}
	}

	return cnt;
}

int main() {
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		Location start, end;
		vector<Circle> c;
		input_location(start, end);
		input_circle(c);

		printf("%d\n", cal_cnt(start, end, c));
	}

	return 0;
}