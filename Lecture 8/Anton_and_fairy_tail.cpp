#include<bits/stdc++.h>
using namespace std;
// const int N = 0;
#define int long long


int32_t main() {
	int n, m;
	cin >> n >> m;

	if (m >= n) {
		cout << n << endl;
	} else {
		int s = 0, e = 1e10;
		int mid;
		while (s <= e) {
			mid = (s + e) / 2;

			int k1 = (mid * (mid + 1)) / 2;//mid th day
			int k2 = ((mid - 1) * mid) / 2;//(mid-1) th day

			if (k1 >= n - m and k2 < n - m) {
				break;
			} else if (k1 < n - m) {
				s = mid + 1;
			} else {
				e = mid - 1;
			}
		}
		cout << m + mid << endl;
	}
}