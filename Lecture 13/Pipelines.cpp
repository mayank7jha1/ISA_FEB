#include<bits/stdc++.h>
using namespace std;
const int N = 0;
#define int long long

int Sum(int n) {
	return n * (n + 1) / 2;
}


int Sum(int s, int e) {
	if (s <= 1) {
		return Sum(e);
	}

	return Sum(e) - Sum(s);
}

int Minsplitters(int n, int k) {

	int s = 1;
	int e = k;

	while (s < e) {
		int mid = (s + e) / 2;

		//end se mid tak ka sum.

		int ans = Sum(n, k);

		if (ans == n) {
			return k - mid + 1;
		} else if (ans > n) {
			s = mid + 1;
		} else {
			e = mid - 1;
		}
	}


	return k - s + 1;
}


int32_t main() {
	int n, k;
	cin >> n >> k;

	if (n == 1) {
		cout << 0 << endl;
		return 0;
	} else if (n <= k) {
		cout << 1 << endl;
	} else {
		k--;
		n--;

		if (Sum(k) < n) {
			cout << -1 << endl;
		} else {
			cout << Minsplitters(n, k) << endl;
		}

	}
}


//1+2-1+3-1+4-1+5-1=11>=n


//n=22;