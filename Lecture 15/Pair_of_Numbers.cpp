#include<bits/stdc++.h>
using namespace std;
const int N = 0;
int n;

int Min_Steps = INT_MAX;


void Solve(int a, int b, int count) {

	if (a >= n or b >= n) {
		//Kaam karna hain?
		//Base Case me aap tab aate ho jab aapka ek path
		//poora evaluate hogya.

		//Is current path ka jo count hain kya vo min hain?

		Min_Steps = min(Min_Steps, count);
		return;
	}


	Solve(a + b, b, count + 1);

	Solve(a, a + b, count + 1);

	return;
}


int main() {
	cin >> n;

	//a=1,b=1, and min steps:
	Solve(1, 1, 0);

	cout << Min_Steps << endl;
}