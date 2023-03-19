#include<bits/stdc++.h>
using  namespace std;

int main() {


	int n;
	cin >> n;

	string s[n];//There aree n strings: 2-d character array hain

	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}

	//Sort String ke array ko sort maarna chahte ho

	sort(s, s + n);

	for (auto x : s) {
		cout << x << " ";
	}
	cout << endl;

	vector<int>v{1, 2, 3, 14, 5, 6};//Container

	sort(v.begin(), v.end());

	for (auto x : v) {
		cout << x << " ";
	}
	cout << endl;

	string s1 = "Mayank";//ascii ke accorrding

	sort(s1.begin(), s1.end());
	cout << s1 << endl;

	for (int i = 0; i < n; i++) {
		sort(s[i].begin(), s[i].end());
	}
	cout << endl;

	// cout << s[2] << endl;//s arrray ki 2 index string print

	// cout << s[2][3] << endl;
	for (auto x : s) {
		cout << x << " ";
	}
	cout << endl;

}










