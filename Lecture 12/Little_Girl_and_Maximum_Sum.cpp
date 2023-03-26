#include<iostream>
#include<algorithm>
using  namespace std;

int main() {
	int n, q;
	cin >> n >> q;

	int a[n + 1];

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	int l, r;

	int sum[n + 2] = {0}; //Why n+2: n+1 is for index 1 based and +1 is for prefix array

	while (q--) {
		cin >> l >> r;

		//You want konsa index kitni barr aaraha hain.

		sum[l] = sum[l] + 1;
		sum[r + 1] = sum[r + 1] - 1;
	}



	for (int i = 1; i <= n + 1; i++) {
		sum[i] = sum[i - 1] + sum[i];
	}

	// for (auto x : sum) {
	// 	cout << x << " ";
	// }
	// cout << endl;

	int ans = 0;

	sort(a + 1, a + n + 1);
	sort(sum + 1, sum + n + 1);

	// for (auto x : sum) {
	// 	cout << x << " ";
	// }
	// cout << endl;


	for (int i = 1; i <= n; i++) {
		ans += a[i] * sum[i];
	}

	cout << ans << endl;


}














