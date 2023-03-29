#include<bits/stdc++.h>
using namespace std;
const int N = 0;

bool compare(pair<int, int>p1, pair<int, int>p2) {

	if (p1.first > p2.first) {
		return true;
	} else {
		return false;
	}
}


bool compare1(pair<int, int>p1, pair<int, int>p2) {

	if (p1.second > p2.second) {
		return true;
	} else {
		return false;
	}
}



int main() {
	int n;
	cin >> n;
	vector<pair<int, int>>v;

	// //Ye ek vector jo ek index par aapke liye ek pair
	// //store karta hain.

	// for (int i = 0; i < n; i++) {
	// 	int x, y;
	// 	cin >> x >> y;
	// 	v.push_back({x, y});
	// }

	// //Since ye ek vector to sorting normal hi hogi

	// //Asc order sort based on first value:
	// sort(v.begin(), v.end());

	// //Desc order sort based on firt value:
	// sort(v.begin(), v.end(), greater<pair<int, int>>());

	// //Desc order me sort karna using comparators based on first value
	// sort(v.begin(), v.end(), compare);


	// //Desc order sort based on second value:
	// sort(v.begin(), v.end(), compare1);


	// for (int i = 0; i < n; i++) {
	// 	cout << v[i].first << " " << v[i].second << endl;
	// }


	//Desc order me sort maarna hain and comparators use nahi karna based on
	//second value:

	//While taking input aap first value of pair ko second me store kare
	//and second ko first me store kare.

	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		v.push_back({y, x});
	}

	//Sort desc based on second value:

	sort(v.begin(), v.end(), greater<pair<int, int>>());

	for (int i = 0; i < n; i++) {
		cout << v[i].second << " " << v[i].first << endl;
	}
}