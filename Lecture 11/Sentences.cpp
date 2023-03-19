#include<bits/stdc++.h>
using  namespace std;

int main() {
	int n;
	cin >> n;

	string s[n];
	cin.ignore();

	for (int i = 0; i < n; i++) {
		getline(cin, s[i]);
	}

	for (int i = 0; i < n; i++) {
		cout << s[i] << endl;
	}
}