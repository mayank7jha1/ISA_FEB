#include<iostream>
#include<algorithm>
using  namespace std;

bool compare(string x, string y) {

	if (x.find(y) == 0 or y.find(x) == 0) {
		if (x.length() > y.length()) {
			return true;
		} else {
			return false;
		}
	}

	if (x < y) {
		return true;
	} else {
		return false;
	}

}

int main() {
	int n;
	cin >> n;

	string s[n];

	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}

	sort(s, s + n, compare);

	for (int i = 0; i < n; i++) {
		cout << s[i] << endl;
	}



}

//sort karo lexographycally:Dictionary
//2 String : lengtth