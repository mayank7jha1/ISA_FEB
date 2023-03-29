#include<bits/stdc++.h>
using namespace std;
const int N = 0;

vector<int>t, u;
//Pair ka first element and Pair ka second element

int main() {
	int n;
	cin >> n;

	vector<int>first, second;
	//First sequence and second sequence.


	//t[0]=1   u[0]=7
	//t[1]=6   u[1]=4
	//t[2]=2   u[2]=10



	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		t.push_back(x);
		u.push_back(y);

		if (t[i] < u[i]) {
			first.push_back(i);
		} else {
			second.push_back(i);
		}
	}

	//Because size of t and u is same.

	for (int i = 0; i < t.size(); i++) {
		cout << "Pair ka First: " << t[i] << " ";
		cout << "Pair ka Second: " << u[i] << endl;
	}

	cout << endl << endl;

	/*	This vector will contain un pair ka index
		jo first type of sequence banate hain:*/

	for (int i = 0; i < first.size(); i++) {
		cout << first[i] << endl;
	}

	/*	This vector will contain un pair ka index
			jo second type of sequence banate hain:*/

	cout << endl << endl;
	for (int i = 0; i < second.size(); i++) {
		cout << second[i] << endl;
	}

	// cout << endl << endl;

	//Iam Printing out the pair that satisfy sequence 1.

	for (int i = 0; i < first.size(); i++) {
		cout << first[i] << " " << t[first[i]] << " " << u[first[i]] << endl;
	}

	cout << endl << endl;

	for (int i = 0; i < second.size(); i++) {
		cout << second[i] << " " << t[second[i]] << " " << u[second[i]] << endl;
	}

}

//S1: x1<x2>x3<x4


//zero index ka pair batao: t[0] and u[0]
//first[i]; t[first[i]]