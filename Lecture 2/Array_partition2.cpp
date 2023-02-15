#include<bits/stdc++.h>
using namespace std;
// #define ll long long
#define int long long

int arrayPairSum(int a[], int n) {
	//Minimum element that can exist: -10^4
	//Maximum element that can exist: 10^4


	int left = -10000;
	int right = 10000;
	int size = right - left + 1;

	int freq[size] = {0};

	for (int i = 0; i < n; i++) {
		int x = a[i];

		freq[x - left]++;
	}

	int ans = 0;//This calculates the contribution of every element.

	int r = 0;//This can store only two values:
	//0: when the previous element is making a complete pair
	//1: when the previous element is making an incomplete pair

	//Iterate over the frequency array and calculate the contribution
	//using effective frequency.

	// i=0;i<size

	for (int i = left; i <= right; i++) {

		if (freq[i - left] > 0) {

			ans = ans + ((freq[i - left] + 1 - r) / 2) * i;

			//make the frequency effective by subtracting it by r.
			freq[i - left] = freq[i - left] - r;

			//calculate r for the next number

			r = freq[i - left] % 2;
		}

	}

	return ans;

}

int32_t main() {
	int n;//long long n
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout << arrayPairSum(a, n) << endl;
	//cout << n << endl;
}

