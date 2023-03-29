#include<bits/stdc++.h>
using namespace std;
const int N = 0;

vector<int>t, u;

//Compare: SOrt based on second value of the pair in desc order

//first array aapka index store karta hain for sequence 1.
//t array hain aapka har pair ka first element store karta hain.
//u array hain aapka har pair ka second element store karta hain.

//mujhe first vector ko sort maarna hain why? because i just have to
//print index of the pair jo sequence 1 ko satify karte hain.

bool compare(int x, int y) {
	//x and y kya hain do index of  pair which satify aapka seqeunce 1.
	//pair ka first chota hain second se

	//Par mujhe sorting kaise karni hain?
	//KI in index par jo jo pair hain unke second values ke acc desc order
	//me sort marna hain.

	//x: aap aise pair ki baat kar rahe ho jo x index par pada hain.
	//y: aap aise pair ki baat kar rahe ho jo y index par pada hain.

	//aapko ye baat pata ki ye dono pakka aapke seqeunce 1 ko
	//satisfy karenge kyuki ye 1 ke ander hain.

	//x index ke pair ka second value chaihiye toh mujhe kaha milega?
	//u[x] and y index ke pair ka second value kaha se milega u[y].

	if (u[x] > u[y]) {
		return true;
	} else {

		//swap between tthe index i.e the first array ke elements swap honge
		return false;
	}
}




bool compare1(int x, int y) {
	//Sort karna hain based on the first value. asc order me

	if (t[x] < t[y]) {
		return true;
	} else {
		return false;
	}
}

int main() {
	int n;
	cin >> n;

	vector<int>first, second;

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

	vector<int>ans;
	//Algorithm: Sort Sequence 1 ke pair by their second value in dec order.
	//Sort sequence 2 ke pair in asc order based on their first value.


	//Jiss sequence ka size bada hai usko hi bas sort karo and print karo

	if (first.size() > second.size()) {
		sort(first.begin(), first.end(), compare);
		ans = first;

	} else {
		sort(second.begin(), second.end(), compare1);
		ans = second;
	}


	// if (first.size() > second.size()) {
	// 	//wrtie a condition to print first array
	// } else {
	// 	//write a condition to print second array
	// }

	cout << ans.size() << endl;
	for (auto x : ans) {
		cout << x + 1 << " ";
	}


}

//This question can have multiple answer.