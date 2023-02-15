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

	int minimum_index = -1;
	int ans = 0;

	for (int i = 0; i < n - 1; i++) {
		//kaam karenge sabse chote element ko dhundo and usko correct position
		//starting ki uske sath swap karo.

		//i-par khade ho maan lo ki yahi smallest hain.
		minimum_index = i;

		for (int j = i + 1; j < n; j++) {
			ans++;
			if (a[j] < a[minimum_index]) {
				minimum_index = j;
			}
		}

		//ye loop ke baad aapke pass ith chota element aagaya

		swap(a[i], a[minimum_index]);

	}

	// for (int i = 0; i < n; i++) {
	// 	cout << a[i] << " ";
	// }
	cout << endl << ans << endl;
}


