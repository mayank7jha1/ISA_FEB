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
		//Print the solution array.

		for (int x = 0; x <= n; x++) {
			for (int y = 0; y <= m; y++) {
				cout << Solution[x][y] << " ";
			}
			cout << endl;
		}

		//Mujhe ek answer mil chuka hain? ab aap apni searching ko stop kardo
		return false;//Kyuki aapko sirf ek solution print karna tha.
	}

	//0,0;

	if (visited[i][j] == 1) {
		//isko already visit kar chuka hu.
		//main jaanta hu is box se answer nahi milega
		return false;
	}

	visited[i][j] = 1;
	Solution[i][j] = 1;

	//Ek bar mai i,j se right me jaasakta hu ya down

	if (j + 1 <= m and visited[i][j + 1] == 0) {
		//toh aap us box par chale jao.

		bool Rightans = RatInMaze(i, j + 1);

		//Agar mujhe right se answer mil gaya toh kya main down jaaunga
		//Recursion se bolo ki true ya false return karke de.
		//true ya false mujhe idhar ye batata hain ki mujhe right jaake i,j se
		//koi solution mila ki nahi.

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

	//WHAT if tumhe right jaake and down jaake koi solution nahi milta
	//tab iska matlab hain ki aap jis box i,j par khade ho us box se
	//koi answer milna possible nai hain.

	Solution[i][j] = 0;
	return false;
}


int main() {
	cin >> n >> m;


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> maze[i][j];

			if (maze[i][j] == 'X') {
				//You cannot visit this box;
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