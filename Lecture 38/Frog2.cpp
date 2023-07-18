#include<iostream>
#include<climits>
#include<bits/stdc++.h>
using  namespace std;
int k;

int dp[100010];
//Top Down

//Space and Time Complexity:
//O(n)-->n=10^5;
//O(States)*O(Transition Time)
//O(n)*O(k):= O(nk);

//Solve(h,x,n):Min cost to reach the xth stone from 0th Stone.
int Solve(int* height, int x, int n) {
	if (x == n) {
		return 0;
	}

	if (dp[x] != -1) {
		return dp[x];
	}

	int Option = INT_MAX;

	for (int i = 1; i <= k; i++) {

		if (x + i <= n) {

			int jump = abs(height[x] - height[i + x]);
			int Rest = Solve(height, x + i, n);

			Option = min(Option, Rest + jump);
		}
	}

	return dp[x] = Option;
}

//Solve(h,x,n):Min cost to reach the 0th Stone from xth Stone.
int Solve2(int* height, int x) {
	if (x == 0) {
		return 0;
	}

	if (dp[x] != -1) {
		return dp[x];
	}

	int Option = INT_MAX;

	for (int i = 1; i <= k; i++) {

		if (x - i >= 0) {

			int jump = abs(height[x] - height[x - i]);
			int Rest = Solve2(height, x - i);

			Option = min(Option, Rest + jump);
		}
	}

	return dp[x] = Option;
}

//O(n) and O(n*k);
int Solve3(int* height, int x) {

	dp[0] = 0;
	dp[1] = abs(height[0] - height[1]);

	for (int i = 2; i <= x; i++) {

		for (int j = i - 1; j >= max(0, i - k); j--) {

			int jump = abs(height[i] - height[j]);
			int Rest = dp[j];

			dp[i] = min(dp[i], Rest + jump);
		}
	}

	return dp[x];
}


int main() {
	int n;	cin >> n >> k;

	int height[n];
	for (int i = 0; i < n; i++) {
		cin >> height[i];
	}

	memset(dp, -1, sizeof(dp));
	//Recursion From Start:
	cout << Solve(height, 0, n - 1) << endl;

	memset(dp, -1, sizeof(dp));
	//Recursion From End:
	cout << Solve2(height, n - 1) << endl;


	//memset(dp, -1, sizeof(dp));

	for (int i = 0; i < 100010; i++) {
		dp[i] = INT_MAX;
	}
	//Bottom Up Method:
	cout << Solve3(height, n - 1) << endl;



}












