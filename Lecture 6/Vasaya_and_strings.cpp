#include<bits/stdc++.h>
using namespace std;
// const int N = 0;
int n, k;
string s;


int Solve(char x) {
	int maximum_substring = INT_MIN;//(-~)

	int j = 0;
	int count = 0;
	//Abhi tak ki subtring me kitne bar aapne
	//change kiya.

	//Iterate over the string:

	for (int i = 0; i < s.length(); i++) {
		//Kuch karna hain s[i]==x toh kuch nahi karna

		if (s[i] != x) {
			count++;//Aapne  operation perform kar liya hain ek bar aur.
		}

		//Aapko check karna hain ki kya aap ye operation kar bhi sakte the
		//ki nahi?
		//Agar aap ye operation nahi kar sakte the toh kya karna hain?
		//aapko j ko vaha leajana hain jaha aap ye operation kar paate.

		while (count > k and j <= i) {
			if (s[j] != x) {
				//Yaha par aapne operation kiya tha
				count--;
			}
			j++;
		}


		if (i - j + 1 > maximum_substring) {
			maximum_substring = i - j + 1;
		}
	}
	return maximum_substring;
}


int main() {
	cin >> n >> k;

	cin >> s;


	//You cannot decide you have to change a to b or b to a.

	//So why not do both;

	//When you want to change b->a
	int option1 = Solve('a');//THis character should not change

	int option2 = Solve('b');

	cout << max(option1, option2) << endl;


}