#include<bits/stdc++.h>
using namespace std;
const int N = 0;


void LinearSearch(int a[], int n, int x) {
	//Linear Search : Computation is of order n.
	int flag = 0;
	int ans = -1;//Why -1 because there can never be a index of -1 value

	for (int i = 0; i < n; i++) {
		if (a[i] == x) {
			ans = i;
			flag = 1;
			break;
		}
	}

	if (flag == 0) {
		cout << "NO" << endl;
	} else {
		cout << "YES" << endl;
		cout << ans << endl;
	}

}


int BinarySearch(int a[], int n, int x) {

	//Always know your search space
	int s = 0;
	int e = n - 1;


	//Aapko element ko find karna hain jabtak seach space
	//finish na hojaaye because at every step you are reducing your
	//search space.
	int ans = -1;

	while (s <= e) {
		int mid = (s + e) / 2;//This is the index where element(mid) will be found

		if (a[mid] == x) {
			ans = mid;
			return ans;
		} else if (a[mid] > x) {
			//a[mid+1] bhi greater than hoga and a[mid+2]
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


	int x;
	cin >> x;

	LinearSearch(a, n, x);
	cout << BinarySearch(a, n, x);
}


