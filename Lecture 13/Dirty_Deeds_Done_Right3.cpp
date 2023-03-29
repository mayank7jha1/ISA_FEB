#include<bits/stdc++.h>
using namespace std;
const int N = 0;

vector<int>t, u;

bool compare(int x, int y) {
	if (u[x] > u[y]) {
		return true;
	} else {
		return false;
	}
}

bool compare1(int x, int y) {
	if (t[x] < t[y]) {
		return true;
	} else {
		return false;
	}
}

int main() {
	int n;
	cin >> n;

	vector<int>first, second;

	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		t.push_back(x);
		u.push_back(y);

		if (t[i] < u[i]) {
			first.push_back(i);
		} else {
			second.push_back(i);
		}
	}

	vector<int>ans;

	if (first.size() > second.size()) {
		sort(first.begin(), first.end(), compare);
		ans = first;

	} else {
		sort(second.begin(), second.end(), compare1);
		ans = second;
	}


	cout << ans.size() << endl;
	for (auto x : ans) {
		cout << x + 1 << " ";
	}


}

//This question can have multiple answer.