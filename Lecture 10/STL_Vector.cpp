// #include<iostream>
// #include<vector>

#include<bits/stdc++.h>
using namespace std;
const int N = 0;

int Solve(vector<int>&x) {
	int sum = 0;
	for (int i = 0; i < x.size(); i++) {
		sum += x[i];
	}

	x[3] = 99999999;
	return sum;
}



vector<int>Sum(vector<int> x) {
	for (int i = 0; i < x.size(); i++) {
		x[i] += 10;
	}
	return x;
}

int main() {

	int n;
	cin >> n;

	vector<int>v(n);//Advisable

	cout << v.capacity() << endl;
	cout << v.size() << endl;

	for (int i = 0; i < n; i++) {
		// int x;
		// cin >> x;
		// v.push_back(x);
		cin >> v[i];
	}

	vector<string>v1(5);//2-D array

	for (int i = 0; i < 5; i++) {
		cin >> v1[i];
	}

	for (int i = 0; i < v.size(); i++) {
		cout << v1[i] << " ";
	}
	cout << endl;

	cout << v1[1][3] << endl;

	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}

	cout << endl << Solve(v) << endl;

	cout << v[3] << endl;

	vector<int>ans = Sum(v);

	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}

	cout << endl;

	//For Every Element that is inside my
	//ans vector do this job:{}

	for (auto x : ans) {
		cout << x << " ";
	}
	cout << endl;


	//Containers me tumhe base address ya last bucket

	// .begin():: first bucket ka address
	// .end():: last ke ek kadam aage vaale bucket ka address

	//C++: Algorithms:

	//STL: first address is included and last is excluded.

	sort(v.begin(), v.end());

}

//Aap ek container ke ander multiple container
//ka use kar sakte ho