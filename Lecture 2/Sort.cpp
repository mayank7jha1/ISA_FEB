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

	sort(a, a + n);//Insertion sort,Quicksort and Heap sort

	//sort inbuild function this works in nlogn computations.

	//which is faster than n^2.

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}


//Bubblesort:::        n^2
//Insertionsort::		n^2
//selection sort::		n^2


// Bubblesort and Insertion Sort: You can reduce your computations in a particular scenarios.

// Array is sorted.   Input: n : n:  Bubblesort (flag)

// If your array is unsorted(small portion: less than mid ) from stsrt:
// Bubblesort;
// end: Insertion sort:


// Insertion: Universe array:

