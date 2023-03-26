#include<iostream>
using  namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;

		int freq[26] = {0};

		for (int i = 0; i < s.length(); i++) {
			if (s[i] == s[i + 1]) {
				i++;
			} else {
				freq[s[i] - 'a']++;
			}
		}

		for (int i = 0; i < 26; i++) {
			if (freq[i] > 0) {
				cout << (char)(i + 'a');
			}
		}
		cout << endl;
	}
}

// 0-- > a
// 1-- > b
// 2-- > c


// freq['a'] == freq[97 - 'a']++;