#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

bool map1[27] = {0};

void Title(string a, int k) {


	int i = 0; int j = a.length() - 1;

	//In this loop we have moved towards the center of the string

	while (i < j) {
		if (a[i] == '?' and a[j] == '?') {
			//You cannot do anything right now.
			i++, j--;
			continue;
		} else if (a[i] != '?' and a[j] == '?') {
			a[j] = a[i];
			map1[a[i] - 'a' + 1] = 1; //this is to build freq array // 1 based

		} else if (a[j] != '?' and a[i] == '?') {
			a[i] = a[j];
			map1[a[i] - 'a' + 1] = 1;

		} else if (a[i] == a[j]) {
			map1[a[i] - 'a' + 1] = 1;
		} else {
			cout << "IMPOSSIBLE" << endl;
			return;
		}
		i++, j--;
	}

	if (i == j and a[i] != '?') {
		map1[a[i] - 'a' + 1] = 1;
	}

	//When i reach here i know for sure ki string palindrome
	//to hosakti hain . Abhi bhi hamara answer impossible hosakta hain
	//based upon k.


	//In this loop we will move outwards and put the non used sabse bada character
	//if all the character upto k were used then just put a
	//if you are not able to put all the characters upto k then just say impossible.

	while (i >= 0) {
		while (k > 1 and map1[k] == 1) {//k=4 and map[4]=1//k=2 and map[2]=0
			k--;
		}

		//k=2

		//if you are in this part of the program you know for sure ki
		//single ? mark nahi hoga ya to partner hoga ? mark ke sath ya fir
		//i==j vala ? mark hoga.

		if (a[i] == '?' and a[j] == '?') {
			a[i] = a[j] = 'a' + k - 1 ;//98
			map1[k] = true;
			i--;
			j++;
		} else {
			i--; j++;
		}
	}

	//a last me likh dunga


	//k = 3; //you have to use first 3 characters:

	//map[4]=1:: map[d]=1;
	//map[3]=1;//map[c]=1;
	//map[2]=0;//map[b]=0;
	//map[1]=1;//map[a]=1

	//you have to check all the characters should be in the string from 1 se k tak.
	//first k characters from 1.



	// _ _ _ _ _ _ _

	// ? ? ? B B ? ? ?

	// i=3;j=4;
	// i--;j++;;

	if (k == 1 and map1[k] == true) {
		cout << a << endl;
	} else {
		cout << "IMPOSSIBLE" << endl;
	}

}

int main() {
	string s;
	int k;
	cin >> k >> s;

	Title(s, k);
}