#include<bits/stdc++.h>
using namespace std;
const int N = 0;


int Solve(int* cost, int n) {

	if (n < 0) {
		return 0;
	}


	int op1 = cost[n] + Solve(cost, n - 1);
	int op2 = cost[n] + Solve(cost, n - 2);

	return (op1, op2);
}

int main() {
	int n;
	cin >> n;

	int cost[n];
	for (int i = 0; i < n; i++) {
		cin >> cost[i];
	}

	cout << Solve(cost, n - 1) << endl;
}