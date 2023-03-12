#include<bits/stdc++.h>
using namespace std;
const int N = 0;

#ifndef ONLINE_JUDGE
#define debug(x) cerr<<#x<<" ";__Print(x);cerr<<endl;
#else
#define debug(x)
#endif

void __Print(int a) {
	cerr << a << " ";
}
void __Print(char a) {
	cerr << a << " ";
}

void __Print(double a) {
	cerr << a << " ";
}

void __Print(long long a) {
	cerr << a << " ";
}

void __Print(string a) {
	cerr << a << " ";
}

void __Print(bool a) {
	cerr << a << " ";
}




template<class T>void __Print(vector<T>a1) {
	cerr << "[ ";
	for (T x : a1) {
		cerr << x << " ";
	}
	cerr << "]";
}

template<class T>void __Print(set<T>a1) {
	cerr << "[ ";
	for (T x : a1) {
		cerr << x << " ";
	}
	cerr << "]";
}

int main() {

//C langauge
	/*#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif*/

#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif

	int a;
	cin >> a;
	//cerr << a << endl;
	debug(a);
	string s = "Masyank";
	//cout << s << endl;
	debug(s);

	// int a1[] = {2, 3, 4, 5, 6, 7};

	vector<int>v{1, 2, 3, 4, 5, 6};//Dynamic array
	// __Print(v);
	debug(v);
	vector<string>v1{"ksnkn", "mkvk", "jsdhn"};
	debug(v1);

	set<int>m;
	m.insert(21);
	m.insert(32);
	debug(m);

	cout << s << endl;
}


// Program ko internal PC me chalate ho
// Online submit: Online judge

