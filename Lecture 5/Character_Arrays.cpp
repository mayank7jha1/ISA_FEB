#include<bits/stdc++.h>
using namespace std;
// const int N = 0;


int Solve(int a[], int n) {
	//Arrays are always passed by reference
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	//return sum;

	a[0] += 100;

	return sum;
}

int main() {


	int a[] = {1, 2, 3, 4, 5, 6};
	cout << a << endl; //Base Address of an array  //a[0]
	cout << &a[0] << endl;
	cout << &a[1] << endl;

	int n = 6;
	//cout << Solve(a, n) << endl;
	cout << Solve(a, n) << endl;

	cout << a[0] << endl;


	//Pass kya kar rahe ho?
	//Arguments : a and n;

	//a is the address toh iska matlab kya hua?
	//function ke ander a jo hain  address jaarah hain


	// char ch[] = {'m', 'a', 'y', 'a', 'n', 'k'};

	// cout << ch << endl;

	//<<: Insertion operators : overloaded when there is a character array


	char ch[100];
	//int n = 6;

	for (int i = 0; i < n; i++) {
		cin >> ch[i];
	}

	cout << ch << endl;

	//Cin white spaces(exclude) ko different input samajta hain




}

//Collection of integers:
//Collection of letters ki baat karega:(word)


//word dega na and letter letter(x)

//white space nahi diya hain bich : character 1byte:

//ch[0]=m and ch[1]=a.....


/*
	n=5
	1 2 3 4 5

	12345: compiler: this is a single number:
	//interger 4byte: range of int:

	character a[]=ma

	sentence: length length


*/