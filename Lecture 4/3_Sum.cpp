#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		int freq[10] = {0};

		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			x = x % 10;
			freq[x]++;
		}


		//Let us build our array now:

		int k = 0;
		int ans[30] = {0};

		for (int i = 0; i <= 9; i++) {
			for (int j = 0; j < min(freq[i], 3); j++) {
				ans[k] = i;
				k++;
			}
		}
		//size of the answer array: k



		//brute force: ans size max: 30*30*30;
		int flag = 0;

		for (int i = 0; i < k ; i++) {

			for (int j = i + 1; j < k; j++) {

				for (int w = j + 1; w < k; w++) {

					if ((ans[i] + ans[j] + ans[w]) % 10 == 3) {
						flag = 1;
						break;
					}
				}
			}
		}


		if (flag == 0) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
		}

	}
}



//input[]= 12 11 3 4 34 56 33 33 1 2 6 3 3 3 4 4

// digit ka array[]=2 1 3 4 4 6 3 3 1 2 6 3 3 3 4 4:: 10^5



/*
				1->2
				2->2
				3->6:: 3 teen bar
				4->4
				6->2
*/

//Logic agar koi digit 3 bar se jada aaraha hain toh hume sirf 3 lena hain


//ans[]={1,1,2,2,3,3,3,4,4,4,6,6}; 30:


// i = 0: fixed kardiya : saare combination jo i = 0 se suru horahe hain;


// //i=1 se lekar i==n-1

// j = 1: aapne kaha dusra number j = 1 lekar saare combination banao;


// i = 0, j = 1,

// //j=2 se leak last number tak:

// //w=2: last tak jaao aur com


// i = 0, j = 1, w = 2(check);
// i = 0, j = 1, w = 3(check);

// i = 0, j = 1, w = 4(check);


// w cannot go futher


// i = 0, j = 2, w = 3;
// i = 0, j = 2, w = 4;



// i = 0, j = 3, w = 4;


// i=1 same

