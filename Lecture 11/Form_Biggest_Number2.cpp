#include<bits/stdc++.h>
using  namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;

		// int a[n];
		string a[n];

		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		//sort(a, a + n);
		sort(a, a + n, greater<string>());//dec

		for (int i = 0; i < n; i++) {
			cout << a[i];
		}
	}
}

// 548 546 60 54
// 60
//string sort?? Dictionary me pehle kaun aayega

//54 546 548 60: Asc

//60 548 546 54: Dec

//3 30
// 30 3::::::::303

//330

//98 9
//998 99

















