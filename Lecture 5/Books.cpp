#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {

	int n, total_time;
	cin >> n >> total_time;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int total_time_consumed = 0;
	int maximum_books_read = 0;


	int j = 0;

	for (int i = 0; i < n; i++) {

		total_time_consumed = total_time_consumed + a[i];
		maximum_books_read++;

		if (total_time_consumed > total_time) {
			total_time_consumed = total_time_consumed - a[j];
			j++;
			maximum_books_read--;
		}
	}

	cout << maximum_books_read << endl;
}


// 0 1 2 3 4 5 6 7 8
// 1 2 3 4 5 6 7 8 9
// a b c d e f g h i


// 9 Books and for first: a sec and second b second


// j=0 that means you are calculating answer from 0 index:

// i=0 and jitna aage jaasakte ho jaao:


// i=4 :

// total_time_consumed=a+b+c+d+e:

// maximum_books_read=5:

// if(total_time_consumed>total_time){
// 	// not true
// }

// i=5:
// total_time_consumed=a+b+c+d+e+f;
// maximum_books_read=6;


// // j=1; se suru karte kitni books ko read kar sakta hu from here.

// if(total_time_consumed>total_time){
// 	//Yes

// 	//Meaning you cannot read the i=5 book or the 6th book


// 	//aap abhi tak 6 th which is an extra book

// 	//agli turn me main kya calculate karna chahta hu?
// 	//kitni books ko read karsakta hu from 1 index se//2nd book

// 	maximum_books_read--;
// 	total_time_consumed=total_time_consumed-a[j];

// 	j++;//j=1;

// }


// // //Idea samaj me aaraha hain?

