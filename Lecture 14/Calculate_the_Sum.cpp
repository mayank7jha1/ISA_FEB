//Array given you have to calculate the sum of this array.

#include<bits/stdc++.h>
using namespace std;
const int N = 0;

int Solve_Recursive(int* a, int n, int i) {

	if (i == n) {
		return 0;
	}


	int value = Solve_Recursive(a, n, i + 1);
	//Task mera kya hain aap current element ko add karna chahte ho
	int ans = value + a[i];
	return ans;
}

int Solve_Recursive2(int* a, int n, int i) {
	//currently you are standing at index 1.

	if (i == n + 1) {
		return 0;
	}


	int value = Solve_Recursive2(a, n, i + 1);
	//Task mera kya hain aap current element ko add karna chahte ho
	int ans = value + a[i - 1];
	return ans;
}

int Solve_Recursive3(int* a, int n) {


	if (n < 0) {
		return 0;
	}


	int value = Solve_Recursive3(a, n - 1);
	//Task mera kya hain aap current element ko add karna chahte ho
	int ans = value + a[n];
	return ans;
}
int Solve_Recursive4(int* a, int n) {


	if (n == 0) {
		return a[0];
	}


	int value = Solve_Recursive4(a, n - 1);
	//Task mera kya hain aap current element ko add karna chahte ho
	int ans = value + a[n];
	return ans;
}

int Solve_Recursive5(int* a, int n) {


	if (n == 0) {
		return 0;
	}


	int value = Solve_Recursive5(a, n - 1);
	//Task mera kya hain aap current element ko add karna chahte ho
	int ans = value + a[n - 1];
	return ans;
}

int Solve(int* a, int n) {

	int ans = 0;

	for (int i = 0; i < n; i++) {
		ans += a[i];
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


	cout << Solve(a, n) << endl;

	cout << Solve_Recursive(a, n, 0) << endl;
	cout << Solve_Recursive2(a, n, 1) << endl;

	cout << Solve_Recursive3(a, n - 1) << endl;
	cout << Solve_Recursive4(a, n - 1) << endl;

	cout << Solve_Recursive5(a, n) << endl;


}

// 0-4?
// 1-5?
// 5-1?
// 4-0?

//a[0]+a[1]+a[2]+a[3]
//Element ko add karne ka