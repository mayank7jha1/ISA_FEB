#include<bits/stdc++.h>
using namespace std;
const int N = 0;

//[]: value at this address
//Since we are dealing with address there is no need to return
//anything

//Address


int sum(int a[], int n) {
	int sum = 0;

	for (int i = 0; i < n; i++) {
		sum += a[i];
	}

	return sum;
}

int sum2(int* a, int n) {
	int sum = 0;

	for (int i = 0; i < n; i++) {
		// sum += a[i];
		sum = sum + *(a + i);
	}

	return sum;
}

int* sum3(int* a, int n) {
	int sum = 0;
	int* ptr = a;

	for (int i = 0; i < n; i++) {
		// sum += a[i];
		sum = sum + *(a + i);
	}

	return ptr;
}



int main() {
	int a[] = {1, 2, 3, 4, 5, 5, 6, 7, 8, 9};
	int n = sizeof(a) / sizeof(int);
	//cout << n << endl;

	cout << sum2(a, n) << endl;

	//cout << a << endl;

	int *xptr = sum3(a, n);

	for (int i = 0; i < n; i++) {
		cout << *(xptr + i) << " ";
	}
	cout << endl;

	for (int i = 0; i < n; i++) {
		cout << xptr[i] << " ";
	}




}

// 10*4/4=10

//Pointers: Why i C most difficult language:
//C:Memory