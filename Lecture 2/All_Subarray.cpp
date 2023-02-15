#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}


	for (int i = 0; i < n; i++) {

		for (int j = i; j < n; j++) {

			//i is the starting point and j is the ending of the
			//subarray.

			for (int k = i; k <= j; k++) {
				cout << a[k] << " ";
			}
			cout << endl;
		}
	}
}