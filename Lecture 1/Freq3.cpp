#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];

	int maximum = INT_MIN;
	int minimum = INT_MAX;

	int ans = 0;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		ans++;
		maximum = max(a[i], maximum);
		minimum = min(a[i], minimum);
	}

	int freq[maximum - minimum + 1] = {0};

	for (int i = 0; i < n; i++) {
		ans++;
		int x = a[i];
		//x----->x-minimum
		freq[x - minimum] = freq[x - minimum] + 1;
	}

	for (int i = 0; i < maximum - minimum + 1; i++) {

		if (freq[i] > 0) {
			cout << "The freq of the element " << i + minimum << " is " << freq[i] << endl;
		}
	}
	//cout << ans << endl;
}

