#include<bits/stdc++.h>
using namespace std;
const int N = 0;

int n, m;
char maze[1001][1001];
bool visited[1001][1001];
bool Solution[1001][1001];

bool RatInMaze(int i, int j) {

	if (i == n and j == m) {

		Solution[i][j] = 1;
		for (int x = 0; x <= n; x++) {
			for (int y = 0; y <= m; y++) {
				cout << Solution[x][y] << " ";
			}
			cout << endl;
		}
		cout << endl;
		return true;//Aap recursion ko bol rahe ho ki aapko koi solution nahi //mila aage dhundo;
	}


	if (visited[i][j] == 1) {
		return false;
	}

	visited[i][j] = 1;
	Solution[i][j] = 1;



	if (j + 1 <= m and visited[i][j + 1] == 0) {
		bool Rightans = RatInMaze(i, j + 1);
		if (Rightans == true) {
			return true;
		}
	}


	if (i + 1 <= n and visited[i + 1][j] == 0) {
		bool downans = RatInMaze(i + 1, j);
		if (downans == true) {
			return true;
		}
	}


	Solution[i][j] = 0;
	return false;//Is i,j box se solution nahi mila hain so return false
}


int main() {
	cin >> n >> m;


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> maze[i][j];

			if (maze[i][j] == 'X') {

				visited[i][j] = 1;
			}
		}
	}

	n--, m--;

	bool ans = RatInMaze(0, 0);

	if (ans == 0) {
		cout << "-1" << endl;
	}
}