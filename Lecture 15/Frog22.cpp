#include<bits/stdc++.h>
using namespace std;
const int N = 0;


int Solve(int* height, int n, int k) {

	if (n <= 0) {
		return 0;
	}

	int Total_ans = INT_MAX;

	for (int i = 1; i <= k; i++) {
		if (n - i < 0) {
			continue;
		}

		int cost = abs(height[n] - height[n - i]);
		int value = Solve(height, n - i, k);

		Total_ans = min(Total_ans, cost + value);
	}

	return Total_ans;
}

int main() {
	int n, k;
	cin >> n >> k;

	int height[n];

	for (int i = 0; i < n; i++) {
		cin >> height[i];
	}

	//0 ----> n-1
	cout << Solve(height, n - 1, k) << endl;
	//cout << "Mayank";

}