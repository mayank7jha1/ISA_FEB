#include<bits/stdc++.h>
using namespace std;
const int N = 0;

int Min_Steps = INT_MAX;

void Function(int a, int b, int count) {

	//4,1
	if (a == 1 and b == 1) {
		Min_Steps = min(Min_Steps, count);
		return;
	}

	if (b - a > 0) {
		Function(a, b - a, count + 1);
	}

	if (a - b > 0) {
		Function(a - b, b, count + 1);
	}
}


void Solve(int n) {
	if (n == 1) {
		Min_Steps = 0;
		return;
	}

	//n : You thought ye n kaise ban sakta hain?

	//n-1,1  n-2,2  n-3,3  n-4,4 n-5,5 n-n,n

	for (int x = 1; x < n; x++) {

		//Abhi main n par khada hu and main recursion ko
		//bolta hu ki x,n-x ka answer mujhe laage do and main
		//usme +1 kardunga kyuki x,n-x se n banane me ek step lagega

		Function(x, n - x, 1);
	}
}

int main() {
	int n;
	cin >> n;
	Solve(n);

	cout << Min_Steps << endl;
}