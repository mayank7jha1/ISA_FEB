#include<bits/stdc++.h>
using namespace std;
const int N = 0;
//Array are always passed by reference.
//Containers are not passed by reference by default
//if you want a container to pass by reference you have to
//make it as a reference variable.

void Permute(char* input, int index) {

	if (input[index] == '\0') {
		cout << input << endl;
		return;
	}

	for (int j = index; input[j] != '\0'; j++) {
		swap(input[index], input[j]);

		Permute(input, index + 1);

		swap(input[index], input[j]);

	}
}



void Permute2(string input, int index) {

	if (index == input.length()) {
		cout << input << endl;
		return;
	}


	for (int j = index; j < input.length(); j++) {
		swap(input[index], input[j]);

		Permute2(input, index + 1);
	}
}

void Permute3(string &input, int index) {//Reference Variable

	if (index == input.length()) {
		//cout << "Ybk";
		cout << input << endl;
		return;
	}


	for (int j = index; j < input.length(); j++) {
		swap(input[index], input[j]);

		Permute3(input, index + 1);
	}
}


int main() {
	string s;
	char input[100];
	cin >> input >> s;


	Permute(input, 0);
	cout << endl << endl;
	Permute2(s, 0);
	cout << endl << endl;
	Permute3(s, 0);
}