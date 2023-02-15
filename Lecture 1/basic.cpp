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

	// for (int i = 0; i < n; i++) {
	// 	cout << a[i] << " ";
	// }

	//Basic Idea:

	//Iterate over the array and calculate konsa element kitni bar aaya hain.

	int count = 0;
	int ans = 0;

	for (int i = 0; i < n; i++) {

		//We are calculating ki ith element array a me kitni bar aaraha hain.
		int temp = a[i];
		//We are currently searching for this ith element or the temp variable inside
		//the array a.
		//Put -1 on the places where you have found a[i] or temp.
		//Beacuse we don't want to calculate the frequency of an element again and again.
		count = 0;
		if (a[i] != -1) {
			for (int j = 0; j < n; j++) {
				ans++;
				if (a[j] == temp) {
					count++;
					a[j] = -1;
				}
			}
			//cout << "The frequency of the element " << temp << " is " << count << endl;
		}
	}

	cout << ans << endl;
}


//Assumption: input and basic syntax of array


//n=10^5::: calculations to find out the frequency of 10^5 elements:
//10^10;