#include<bits/stdc++.h>
using namespace std;
const int N = 0;
#define int long long


int32_t main() {
	int n;
	cin >> n;

	int a[n], sum = 0;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}

	if (sum % 2 == 1) {
		cout << "NO" << endl;
		return 0;
	}

	int single_part_sum = sum / 2;

	int ls = 0, rs = 0;

	vector<int>freq(10000, 0);

	for (int i = 0; i < n; i++) {
		ls = ls + a[i];

		//ye current element ko frequency array me daal do.
		freq[a[i]]++;

		if (freq[ls - single_part_sum] > 0) {
			cout << "YES" << endl;
			return 0;
		}
	}

	freq.clear();
	freq.resize(100005, 0);//10^6;

	// memset(freq, 0, sizeof(freq));
	// cout << endl;
	// cout << freq.size() << endl;

	// for (int i = 0; i < 100005; i++) {
	// 	freq[i] = 0;
	// }

	for (int i = n - 1; i >= 0; i--) {
		rs = rs + a[i];

		freq[a[i]]++;

		if (freq[rs - single_part_sum] > 0) {
			cout << "YES" << endl;
			return 0;
		}
	}


	cout << "NO" << endl;



}