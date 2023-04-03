#include<bits/stdc++.h>
using namespace std;
const int N = 0;


void Subsequences(char* input, char* output, int i, int j) {

	if (input[i] == '\0') {
		output[j] = '\0';
		cout << output << endl;
		return;
	}

	//i is for iterating over input array
	//j is for iterating over output array


	//Task kya hain?

	//EK bar karke dikhana hain recursion ko:
	//ek box ke character ko lete kaise hain and nahi lete kaise hain?

	//You are taking this ith index character of input array.
	output[j] = input[i];
	Subsequences(input, output, i + 1, j + 1);

	//You don't want to take this ith index character in the output array
	//Store nahi karunga.
	//recursion ko agle stage par kaise: i+1

	//Output array ka index nahi badhayenge kyu? kyuki agla jo bhi character
	//hoga vo isko overwrite kardega.
	Subsequences(input, output, i + 1, j);


}

int main() {

	char input[100];
	cin >> input;


	//Har Path ka answer main kaise calculate karu? Print kaise karu?

	//We can take an array and hum usme changes kar karke print karvate rahenge.
	//Output array lete hain and hum unme single path ka answer print karvate rahenge


	char output[100];

	//Print hoga mera output vo maximum kitne characters ka hoga?
	//Jine input hain.

	//Mujhe ye baat kaise pata chale ki main konse character par khada in input?

	//aapko count lena padega for input.

	//Mujhe ye kaise pata chale ki main konse character par khada hu in
	//output array?
	//output ke liye bhi ek count lena padega.

	Subsequences(input, output, 0, 0);
}