#include<bits/stdc++.h>
using namespace std;
const int N = 0;

// int sum(int* x, int* y) {

// 	swap(*x, *y);
// 	cout << *x << " " << *y << endl;
// }

//New variable x=value niche se aayi


int sum(int &x, int &y) {

	swap(x, y);
	cout << x << " " << y << endl;
}

// sum function x banega and overa=lap

int main() {
	int x = 10;
	int y = 20;

	cout << x << " " << y << endl;

	//sum(&x, &y);//Rather reference variable

	sum(x, y);


	cout << x << " " << y << endl;
}

