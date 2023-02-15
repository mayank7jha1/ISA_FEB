#include<bits/stdc++.h>
using namespace std;
// const int N = 0;\

int main() {
	srand(time(0));

	int n = rand() % 705 + rand() % 15;
	cout << n << endl;
	vector<int>v;
	for (int i = 0; i < n; i++) {
		v.push_back(rand() % 10000);
	}

	for (auto x : v) {
		cout << x << " ";
	}
	cout << endl << endl;
	cout << "[";
	for (auto x : v) {
		cout << x << ",";
	}
	cout << "]";

}