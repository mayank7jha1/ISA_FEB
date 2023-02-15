#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {
	int n;
	cin >> n;
	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	//two parameters: address of the first block and
	//address of the last+1 block;

	// [x, y);
	sort(a, a + n);

	cout << a << endl;
	cout << &a[0] << endl;//address of operator
	cout << &a[1] << endl;

	//kyuki ye ke interger array:a ka ddress me 4 byte add hojaayegi:


	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	//cout << endl << ans << endl;
}


//6422200
//6422204



// 10 11 12 13


// a[0], a[1], a[2], a[3]:


// a + 0, a + 3
// [a + 0, a + 4)


//Inbuild function: apne functions: bubble sort: insertion
//sort: conf

//Quick and Merge sort:



//array,input output,reversal, rotate,sort

//basic assignment 100 questions:
//assigment 100 question basic: assignment:
