#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

bool map1[27] = {0};

void Title(string a, int k) {


	int i = 0; int j = a.length() - 1;
	//cout << k << endl;

	while (i < j) {
		if (a[i] == '?' and a[j] == '?') {
			i++, j--;
			continue;
		} else if (a[i] != '?' and a[j] == '?') {
			a[j] = a[i];
			map1[a[i] - 'a' + 1] = 1;

		} else if (a[j] != '?' and a[i] == '?') {
			a[i] = a[j];
			map1[a[i] - 'a' + 1] = 1;

		} else if (a[i] == a[j]) {
			map1[a[i] - 'a' + 1] = 1;
		} else {
			cout << "IMPOSSIBLE" << endl;
			return;
		}
		i++, j--;
	}

	if (i == j and a[i] != '?') {
		map1[a[i] - 'a' + 1] = 1;
	}


	while (i >= 0) {
		while (k > 1 and map1[k] == 1) {//k=4 and map[4]=1//k=2 and map[2]=0
			k--;
		}

		if (a[i] == '?' and a[j] == '?') {
			a[i] = a[j] = 'a' + k - 1 ;//98
			map1[k] = true;
			i--;
			j++;
		} else {
			i--; j++;
		}
	}



	if (k == 1 and map1[k] == true) {
		cout << a << endl;
	} else {
		cout << "IMPOSSIBLE" << endl;
	}
}



int main() {
	string s;
	int k;
	cin >> k >> s;

	// cout << s << endl;

	Title(s, k);
}