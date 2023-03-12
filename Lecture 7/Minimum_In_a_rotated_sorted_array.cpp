#include<bits/stdc++.h>
using namespace std;
const int N = 0;

int minimum_in_rotated_array(int a[], int n) {
	int s = 0;
	int e = n - 1;

	int ans = -1;

	while (s <= e) {
		int  mid = (s + e) / 2;

		if (a[mid] <= a[n - 1]) {
			ans = mid;
			e = mid - 1;
		} else {
			s = mid + 1;
		}
	}

	return ans;
}



int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout << minimum_in_rotated_array(a, n) << endl;
}


//Hume ye kaise pata chala ki yaha bs lagana hain.
//hume kab kab bs lagana hain.

//Question me likha tha ki logn : BS