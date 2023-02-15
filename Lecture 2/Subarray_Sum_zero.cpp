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


	int pre[n + 1] = {0};

	int sum = 0;

	for (int i = 0; i < n; i++) {
		sum = sum + a[i];
		pre[i] = sum;
	}

	// pre[0] = a[0];

	// for (int i = 1; i < n; i++) {
	// 	pre[i] = pre[i - 1] + a[i];
	// }

	for (int i = 0; i < n; i++) {
		cout << pre[i] << " ";
	}
	cout << endl;

	int freq[10005] = {0};

	//Iterating over the prefix array;
	for (int i = 0; i < n; i++) {
		int x = pre[i];
		freq[x]++;
	}

	int flag = 0;
	//Iterating over the frequency and aplying our logic.

	for (int i = 0; i < 10005; i++) {
		if ((i == 0 and freq[i] > 0) or freq[i] > 1) {
			flag = 1;
			break;
		}
	}

	if (flag == 1) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

}