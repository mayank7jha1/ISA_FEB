#include<iostream>
using  namespace std;

int grid[101][101];

class Solution {
public:
	int dp[101][101];
	int uniquePaths2(int m, int n) {

		if (m == 0 and n == 0) {
			return 1;
		}
		if (m < 0 or n < 0) {
			return 0;
		}

		if (dp[m][n] != -1) {
			return dp[m][n];
		}

		int Option1 = uniquePaths2(m - 1, n);
		int Option2 = uniquePaths2(m, n - 1);

		return dp[m][n] = Option1 + Option2;

	}

	int uniquePaths(int m, int n) {
		//m = No of Rows and n = Number of Columns.

		memset(dp, -1, sizeof(dp));
		return uniquePaths2(m - 1, n - 1);
	}
};


class Solution2 {
public:
	int dp[101][101];
	int uniquePaths(int m, int n) {

		if (m == 1 and n == 1) {
			return 1;
		}

		for (int i = 1; i <= m; i++) {
			for (int j = 1; j <= n; j++) {
				if (i == 1 or j == 1) {
					dp[i][j] = 1;
				} else {

					dp[i][j] = dp[i - 1][j] + dp[i][j - 1];

				}
			}
		}
		return dp[m][n];
	}
};



int main() {
	//m = No of Rows and n = Number of Columns.
	int m, n;
	cin >> m >> n;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> grid[i][j];
		}
	}

	Solution obj;
	cout << obj.uniquePaths(m, n) << endl;

}