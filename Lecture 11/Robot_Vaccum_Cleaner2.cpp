#include<bits/stdc++.h>
using  namespace std;
#define int long long

int Noise(string &s) {
	int ans = 0, count = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 's') {
			count++;
		} else {
			ans += count;
		}
	}
	return ans;
	//sshhh: ans: 6
	//i=0: s[0]==s: count++,count=1
	//i=1: s[1]==s: count++,count=2
	//i=2: s[2]==h: ans=ans+2;
	//i=3: s[3]==h: ans=2+2=4
	//i=4: s[4]==h: ans=4+2=6
}

bool compare(string x, string y) {
	string xy = x + y;
	string yx = y + x;

	if (Noise(xy) > Noise(yx)) {
		return true;
	} else {
		return false;
	}
}

int32_t main() {
	int n;
	cin >> n;

	vector<string>s(n);//string of vector

	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}

	sort(s.begin(), s.end(), compare);

	string ans;

	for (int i = 0; i < n; i++) {
		ans = ans + s[i];
	}

	cout << Noise(ans) << endl;
}




//umnik:
//java : second thread/ petr


