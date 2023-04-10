#include<bits/stdc++.h>
using namespace std;
const int N = 0;


int fast_power(int x, int y) {


	if (y == 0) {
		return 1;
	}

	int small_ans = fast_power(x, y / 2);

	if (y % 2 == 1) {
		return small_ans * small_ans * x;
	} else {
		return small_ans * small_ans;
	}
}

int main() {
	int x, y;
	cin >> x >> y;
	cout << fast_power(x, y) << endl;
}

