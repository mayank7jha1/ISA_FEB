#include<bits/stdc++.h>
using  namespace std;

bool compare(int x, int y) {
	if (x < y) {
		return true;
	} else {
		return false;
	}
}

//Kabhi true return kar rraha hain :
//false: swap kardo

int main() {


	int a[] = {3, 2, 1, 3, 4, 5, 6, 7};

	int n = sizeof(a) / sizeof(int);

	//sort(a, a + n, greater<int>()); //Sort
	//sort(a, a + n, less<int>());


	//Aap khud apna comparator bana lo ya
	//mujhee sikha do compare kaise karna hain

	//Lymda Functions:

	sort(a, a + n, compare);//Bubble Sort Yad hai?

	for (int x : a) {
		cout << x << " ";
	}

	//Reverse Print Kardo
}

//sort(af,alda,):

//Kis tareeke se compare karrna hain

//greater<int>
//less<int>