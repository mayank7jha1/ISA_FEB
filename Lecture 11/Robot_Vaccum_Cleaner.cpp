#include<bits/stdc++.h>
using  namespace std;
#define int long long

int Noise(string &s) {
	//Kitni bar aapka s aaya hai ek h se pehle

	int ans = 0, count = 0;
	//ans batata hai total abhi tak noise kitna hogaya hain
	//count batata hain ki is h se peehle kitne s the.

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 's') {
			count++;
		} else {
			ans += count;
		}
	}

	//sshh:
	//i=0,count=1,i=1,count=2,i=2,ans=2,i=3 ans=2+2;
	return ans;
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
	//If you have taken input in the string of array
	//i.e. like s[n]: sort(s,s+n);

	sort(s.begin(), s.end(), compare);

	//string s[n]: array of string:
	//array hain data type string
	//sort(s,s+n);
	//array ke har index me ek string hain.

	//array ke 3rd index ke string ko sortt mar do.

	//cout<<s[3]<<endl;

	//sort(s[3].begin(),s[3].begin())

	// string st;
	//sort(st.begin(),st.end());

	// vector<string>s(n);
	//vector of type strring: vector ka data type string

	//sort(s.begin(),s.end());

	//v[index]: eek strring:
	//ith index sttrring ko sort maarna hain

	//sort(s[i].begin(),s[i].end());

	string ans;

	for (int i = 0; i < n; i++) {
		ans = ans + s[i];
	}

	cout << Noise(ans) << endl;
}







