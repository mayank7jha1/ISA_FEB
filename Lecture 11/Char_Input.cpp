#include<iostream>
using  namespace std;

int main() {
	char ch;
	cin >> ch;//This input 5 is not integer 5: ascii: 53
	cout << ch << endl;

	cout << ch - 48 << endl;
	cout << ch - '0' << endl;

	char ch1[100];
	cin >> ch1;
	cout << ch1 << endl;

	char ch2[100];
	cin >> ch2;
	cout << ch2 << endl;

	string s;
	cin >> s;
	cout << s << endl;


}


// user 51:  store char: 1 byte: spaces