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

	int ans = 0;

	// int flag = 0;

	for (int i = 0; i < n - 1; i++) {
		int flag = 0;

		//main ye keh raha hu jab aap ith lasrgest nikal rahe ho
		//us time aapne ek bhi swap nahi kiya

		for (int j = 0; j < n - i - 1; j++) {

			ans++;
			if (a[j] > a[j + 1]) {
				flag = 1;
				swap(a[j], a[j + 1]);
			}
		}

		if (flag == 0) {
			//ek bhi bar swap nahi kiya.
			break;
		}
	}

	// for (int i = 0; i < n; i++) {
	// 	cout << a[i] << " ";
	// }
	cout << endl << ans << endl;
}

