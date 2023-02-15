#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {
	int n;
	cin >> n;
	int a[n];

	int maximum = INT_MIN; //-~
	//INT_MIN: The smallest value of int.
	//LONG_MIN: The smallest value of long long
	//climits

	for (int i = 0; i < n; i++) {
		cin >> a[i];

		// if (maximum < a[i]) {
		// 	maximum = a[i];
		// }

		// maximum=max(a[i],maximum)
	}


	//You want the maximum element of this array a.

	for (int i = 0; i < n; i++) {
		maximum = max(a[i], maximum);
	}

	int freq[maximum + 1] = {0};//aapne ek array banaya jisma name hain freq and jiska size han
	//maximum+1 and jo initialised hain with the value zero.


	//Iterate over the array a why? because hume ussi ke elements ki frequency nikalni hain.

	for (int i = 0; i < n; i++) {


		//current kisi ith element par khade ho

		int x = a[i];

		//is x ki frequency aapko frequency array me update karni hain
		// x ki frequency mujhe frequency array me kha par milegi, index x par
		//hum infer karte hain isse ki x index of the freq array par aapko jaan hain
		//aur vaha jaake value ko +1 se update karna hain.

		freq[x] = freq[x] + 1;
		//freq[x]++;
		//freq[a[i]]++;
		//freq[a[i]] = freq[a[i]] + 1;

	}


	//aapne frequency bana liya hain.
	//ab aaapko har element ki frequency ko print karna hain.

	//main freq par iterate karunga and har element par jaake uski frequency ko print karva dunga
	//kya mujhe freq me un elements ko print karvana chahiye jiski freq 0 hain?
	//Nahi : why jiski freq 0 hain iska matlab vo array a aaya hi nhi why should i print it?


	//Task in hand: Iterate over the freq array and print all the elements and its
	//freq of such elements whose freq is not zero.

	for (int i = 0; i < maximum + 1; i++) {
		//aapka element currently is "i"
		//check karna hain ki i ki freq xero badi hain?
		if (freq[i] > 0) {
			//ab aapko kuch kaam karna hain

			//print karvao.

			cout << "The freq of the element " << i << " is " << freq[i] << endl;
		}
	}
}

//space increase universe : time limited but space thoda jada hain.