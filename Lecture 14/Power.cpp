#include<bits/stdc++.h>
using namespace std;
const int N = 0;

//0-(y-1)==y;

int Power_Recursive(int x, int y, int count) {

	if (count == y) {
		return 1;
	}

	//Task: Multiply by 2 ek bar
	//Assume kar lete hain ki compiler ne apna kaam karliya hoga

	int value = Power_Recursive(x, y, count + 1);
	int ans = 2 * value;
	return ans;
}


int Power_Iterative(int x, int y) {

	int ans = 1;

	for (int i = 0; i < y; i++) {
		ans = ans * 2;
	}
	return ans;
}

int main() {
	int x, y;
	cin >> x >> y;


	//x^y;
	cout << Power_Iterative(x, y) << endl;

	cout << Power_Recursive(x, y, 0) << endl;
}