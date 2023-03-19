#include<bits/stdc++.h>
using  namespace std;

bool compare(string x, string y) {
	string xy = x + y;
	string yx = y + x;

	if (xy > yx) {
		return true;
	} else {
		return false;
	}
}

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
		//sort(a, a + n, greater<string>());//dec
		sort(a, a + n, compare);

		for (int i = 0; i < n; i++) {
			cout << a[i];
		}
		cout << endl;
	}
}



//98 9:

//x=98 y=9:: swap kardo: x=9 y=98: xy

//998
//989

//989
//998
















