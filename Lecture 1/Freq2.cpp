#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];

	int maximum = INT_MIN;
	int ans = 0;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		ans++;
		maximum = max(a[i], maximum);
	}

	int freq[maximum + 1] = {0};

	for (int i = 0; i < n; i++) {
		ans++;
		int x = a[i];
		freq[x] = freq[x] + 1;
	}

	// for (int i = 0; i < maximum + 1; i++) {

	// 	if (freq[i] > 0) {
	// 		cout << "The freq of the element " << i << " is " << freq[i] << endl;
	// 	}
	// }
	cout << ans << endl;
}

