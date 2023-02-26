#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {



	string s = "Mayank";

	int freq[256] = {0};//ascii table 256:

	for (int i = 0; i < s.length(); i++) {
		freq[s[i]]++;
	}


	for (int i = 0; i < 256; i++) {
		if (freq[i] > 0) {
			//i===ascii value of a character:

			cout << "freq of " << (char)i << " is " << freq[i] << endl;
		}
	}


	//YOu are only doing task on a lower case characters:

	int freq2[27] = {0};

	// freq2[0] = vo mujhe small a ki freq batata hain;
	// freq2[1] = b ki freq batata hain;

	// freq2[2] = c;
	// freq2[3] = d;

	// freq2[4] = e;
	// freq2[5] = f;
	// freq2[6] = g;

	// freq2[7] = h;

	// freq2[25] = z ki freq;

	string s2 = "hksfdhkbjvdbmbcxbxcvbmvnvcxmbxmvm";

	for (int i = 0; i < s2.length(); i++) {
		freq2[s2[i] - 'a']++;
	}


	for (int i = 0; i < 26; i++) {
		if (freq2[i] > 0) {
			//i===ascii value of a character:

			cout << "freq of " << (char)(i + 'a') << " is " << freq2[i] << endl;
		}
	}

}


// 90*8=720:500+:



// 150 khud ho: 350+ algo