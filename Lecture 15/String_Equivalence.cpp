#include<bits/stdc++.h>
using namespace std;
const int N = 0;

int n;

void String_Equivalence(char* output, int i, int Max_character) {

	if (i == n) {
		//Ek answer hoga output array me
		output[i] = '\0';
		cout << output << endl;
		return;
	}


	for (char ch = 'a'; ch <= Max_character; ch++) {
		output[i] = ch;

		if (ch == Max_character) {
			String_Equivalence(output, i + 1, Max_character + 1);
		} else {
			String_Equivalence(output, i + 1, Max_character);
		}
	}

}

// second box: Max_character = b;
// aa _ _

// a a a _

int main() {
	cin >> n;
	char output[100];

	String_Equivalence(output, 0, 'a');

	//Maximum character of the oth box is 'a'.
}