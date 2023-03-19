#include<iostream>
#include<string>
#include<vector>
#include<cstring>
#include<algorithm>
using  namespace std;

int main() {

	char ch[100];//This works only on character array
	cin.getline(ch, 100);


	// cout << ch << endl;
	vector<string>v;

	// char* token = strtok(ch, " ");
	// cout << token << endl;

	// while (token != NULL) {
	// 	token = strtok(NULL, " ");
	// 	//v.push_back(token);
	// 	cout << token << endl;
	// }


	string s;
	getline(cin, s);
	cout << s << endl;

	char* token = strtok((char*)s.c_str(), " ");

	while (token != NULL) {
		cout << token << endl;
		v.push_back(token);
		token = strtok(NULL, " ");
	}

	reverse(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++) {
		reverse(v[i].begin(), v[i].end());
	}

	for (auto x : v) {
		cout << x << " ";
	}


}















