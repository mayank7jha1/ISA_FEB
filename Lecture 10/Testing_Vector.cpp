#include<bits/stdc++.h>
#include "Vector.h"
using namespace std;
const int N = 0;

int main() {


	vector1<int>v;

	v.push_back(20);
	v.push_back(40);
	v.push_back(90);
	v.push_back(180);

	for (int i = 0; i < 4; i++) {
		cout << v[i] << " ";
	}

	cout << endl;

	vector1<string>v1;

	v1.push_back("Mayank");
	v1.push_back("Rahul");
	v1.push_back("Sarthak");

	for (int i = 0; i < v1.size(); i++) {
		cout << v1[i] << " ";
	}

}