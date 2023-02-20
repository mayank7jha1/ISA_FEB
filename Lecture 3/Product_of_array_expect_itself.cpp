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

	int pre[n];

	for (int i = 0; i < n; i++) {
		pre[i] = 1;
	}

	//pre[0] = a[0];
	pre[0] = 1;

	// for (int i = 1; i < n; i++) {
	// 	pre[i] = pre[i - 1] * a[i];
	// }

	for (int i = 1; i < n; i++) {
		pre[i] = pre[i - 1] * a[i - 1];
	}


	int suffix[n];

	for (int i = 0; i < n; i++) {
		suffix[i] = 1;
	}

	//suffix2[n - 1] = a[n - 1];

	// for (int i = n - 2; i >= 0; i--) {
	// 	suffix2[i] = suffix2[i + 1] * a[i];
	// }

	suffix[n - 1] = 1;

	for (int i = n - 2; i >= 0; i--) {
		suffix[i] = suffix[i + 1] * a[i + 1];
	}

	// for (int i = n - 1; i >= 1; i--) {
	// 	pre[i] = pre[i - 1];
	// }
	// pre[0] = 1;




	// for (int i = 0; i <= n - 2; i++) {
	// 	suffix2[i] = suffix2[i + 1];
	// }
	// suffix2[n - 1] = 1;


	int ans[n];

	for (int i = 0; i < n; i++) {
		ans[i] = 1;
	}

	for (int i = 0; i < n; i++) {
		ans[i] = pre[i] * suffix[i];
	}


	for (int i = 0; i < n; i++) {
		cout << ans[i] << " ";
	}

}

// x+y:
// x^n:


// x^2n+y^5^n

//Standard Stuff