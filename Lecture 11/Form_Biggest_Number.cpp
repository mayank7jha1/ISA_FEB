#include<bits/stdc++.h>
using  namespace std;

int main() {
	// char ch;
	// cin >> ch;

	// cout << ch << endl;//This ch is a character 5

	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	string s[n];

	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}

	for (int i = 0; i < n; i++) {
		cout << s[i] << " ";
	}
	cout << endl;


}