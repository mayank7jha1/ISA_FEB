#include<bits/stdc++.h>
using namespace std;
const int N = 0;

int main() {
	int n, m;
	cin >> n >> m;

	int a[n], b[m];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}

	sort(a, a + n);

	sort(b, b + m, greater<int>());

	int ans = 0;

	for (int i = 0; i < min(n, m) and a[i] < b[i]; i++) {
		ans += (b[i] - a[i]);
	}

	cout << ans << endl;
}



