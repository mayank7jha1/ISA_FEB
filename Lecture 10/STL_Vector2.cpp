#include<bits/stdc++.h>
using namespace std;
const int N = 0;

int main() {
	vector<int>v{12, 4, 5, 7, 1, 2, 2, 2, 3, 4, 65, 7, 8, 8, 9, 90};

	int a[] = {34, 4, 3, 2, 1, 1, 12, 3, 4, 4, 5, 7, 6, 7, 8, 8, 8, 9};

	int m = v.size();
	int n = sizeof(n) / sizeof(int);

	//Algorithms in STL;

	sort(v.begin(), v.end());

	sort(a, a + n);

	reverse(v.begin(), v.end());

	reverse(a, a + n);

	//auto is int
	for (auto x : v) {
		cout << x << " ";
	}

	cout << endl;

	for (auto x : a) {
		cout << x << " ";
	}

	cout << endl;



	//vector<int>::iterator it;

	for (auto it = v.begin(); it != v.end(); it++) {
		cout << (*it) << " ";
	}

	cout << endl;



}

//H.W Study about Vector functions and do implement some of them.
//Study about the algorithms available in STL and implement them on strings,arrays and vectors.
//2-D array and Vector of vector and array of vector me difference padh ke aana.
//Implementation