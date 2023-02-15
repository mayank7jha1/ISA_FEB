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


	//aap 1 index se suru karo and last tak har element ko
	//sorted half me daal do.

	for (int i = 1; i < n; i++) {

		int temp = a[i];

		int j = i - 1;
		while (j >= 0 and a[j] > temp) {
			ans++;
			//shifiting
			a[j + 1] = a[j];
			j--;
		}

		a[j + 1] = temp;
	}


	// for (int i = 0; i < n; i++) {
	// 	cout << a[i] << " ";
	// }
	cout << endl << ans << endl;
}


