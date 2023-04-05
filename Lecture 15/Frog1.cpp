#include<bits/stdc++.h>
using namespace std;
const int N = 0;


int Solve(int* height, int n) {


	//Stop Condition:
	if (n <= 0) {
		return 0;
	}

	int option1 = INT_MAX, option2 = INT_MAX;

	//Meaning of this is: Ek kadam ka jump liya
	if (n - 1 >= 0) {
		int cost = abs(height[n] - height[n - 1]);
		int value = Solve(height, n - 1);
		option1 = cost + value;
	}


	//Meaning of this is aapne 2 kadam ka jump liya
	if (n - 2 >= 0) {
		int cost = abs(height[n] - height[n - 2]);
		int value = Solve(height, n - 2);
		option2 = cost + value;
	}

	int ans = min(option1, option2);

	return ans;
}

int main() {
	int n;
	cin >> n;

	int height[n];

	for (int i = 0; i < n; i++) {
		cin >> height[i];
	}

	//0 ----> n-1
	cout << Solve(height, n - 1) << endl;

}

//TLE: Recursion