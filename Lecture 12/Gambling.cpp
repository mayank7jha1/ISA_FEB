#include<iostream>
#include<bits/stdc++.h>
using  namespace std;
#define int long long

int a[100005] = {0}, b[100005] = {0};

int ans = 0;

int32_t main() {
	int n;
	cin >> n;



	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}

	int j = 0, i = 0;

	sort(a, a + n, greater<int>());
	sort(b, b + n, greater<int>());


	while (i < n or j < n) {
		//First Change: a ki chancee

		if (a[i] > b[j]) {
			//A ka element bada hain
			ans = ans + a[i];
			i++;
		} else {
			//b ka element bada hai so remove b ka
			j++;
		}


		//B Ki change aayi

		if (a[i] > b[j]) {
			//remove a ka element
			i++;
		} else {
			ans = ans - b[j];
			j++;
		}
	}

	cout << ans << endl;
}






//n=10^5: nlogn:
