#include<bits/stdc++.h>
using namespace std;
const int N = 0;

int Min_Steps = INT_MAX;

void StairCase(int* a, int n, int i, int count, bool* visited) {

	if (i == n) {
		Min_Steps = min(Min_Steps, count);
		return;
	}


	//YOu are standing at the i th stair: 0th stair

	visited[i] = 1;

	//op1 and op2

	if (i + 1 <= n and visited[i + 1] == 0) {
		StairCase(a, n, i + 1, count + 1, visited);
	}

	if (i + a[i] <= n and visited[i + a[i]] == 0) {
		StairCase(a, n, i + a[i], count + 1, visited);
	}


	//Piche jaarahe ho toh aisa hosakta hain ki is i box par kahi aur se
	//aajao toh tum

	visited[i] = 0;//Backtracking


}


int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		bool visited[100005] = {0};

		StairCase(a, n, 0, 0, visited);
		cout << Min_Steps << endl;
	}
}