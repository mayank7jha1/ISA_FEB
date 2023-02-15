#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int arrayPairSum(int a[], int n) {
	sort(a, a + n);

	int ans = 0;
	for (int i = 0; i < n; i = i + 2) {
		ans = ans + a[i];
	}
	return ans;
}

int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout << arrayPairSum(a, n) << endl;
}