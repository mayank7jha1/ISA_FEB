#include<bits/stdc++.h>
using namespace std;
const int N = 0;

//Chote chote: DRY Run : Call stack: Visualisation

void Subsequences(char* input, char* output, int i, int j) {

	if (input[i] == '\0') {
		output[j] = '\0';
		cout << output << endl;
		return;
	}


	output[j] = input[i];
	Subsequences(input, output, i + 1, j + 1);


	Subsequences(input, output, i + 1, j);


}

int main() {

	char input[100];
	cin >> input;


	char output[100];


	Subsequences(input, output, 0, 0);
}