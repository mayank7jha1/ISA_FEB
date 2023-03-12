#include<bits/stdc++.h>
using namespace std;
const int N = 0;


int findPeakElement(int a[], int n) {

	int s = 0;
	int e = n - 1;

	int ans = -1;
	while (s <= e) {
		int mid = (s + e) / 2;

		if (mid + 1 == n or a[mid] >= a[mid + 1]) {
			//10 11 12 13 14 15
			//n=6;
			//mid=5:
			//mid+1==6

			//a[mid]=15
			//a[mid+1]=?
			//segmentation fault:
			ans = mid;
			e = mid - 1;
		} else {
			s = mid + 1;
		}
	}
	return ans;
}

//Edge Case Miss kardiya hain.


int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout << findPeakElement(a, n) << endl;
}


//What if your peak element is your last element



_
_
_
_
_
_


1 2 3 4 5


// a b op
// 1 (?)