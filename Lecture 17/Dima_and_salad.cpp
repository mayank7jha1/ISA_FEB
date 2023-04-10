#include<bits/stdc++.h>
using namespace std;
const int N = 0;
#define int long long
int n, k;
int * taste, *calorie;


int Dima_and_Salad(int i, int sum) {


	if (i == n) {


		if (sum == 0) {
			//you have to consider this option:
			//bich ke jo jo fruit liye honge unsa sum to add karte hue aaye hoge
			return 0;
		}

		//is sum is not equal to toh tum is option ko consider nahi kar sakte

		//since tumhe ye pata hain ki tum aage jaake maximum lene lene vaale ho
		//and ye option ko directly hata du aisa koi tareeka nahi hain toh
		//aap kya karo ki aap yaha se return kardo aisa chota number jo kabhi
		//answer banega hi nahi kyuki jab dusre option me kuch bhi value hogi
		//toh vo dusra option isse to bada hi hoga

		return -1e12;

	}


	//When you are talking the ith fruit
	int option1 = taste[i] + Dima_and_Salad(i + 1, sum + taste[i] - k * calorie[i]);

	//When you are not taking the ith fruit
	int option2 = 0 + Dima_and_Salad(i + 1, sum);

	return max(option1, option2);
}


int32_t main() {
	cin >> n >> k;
	taste = new int[n];
	calorie = new int[n];


	for (int i = 0; i < n; i++) {
		cin >> taste[i];
	}

	for (int i = 0; i < n; i++) {
		cin >> calorie[i];
	}


	int ans = Dima_and_Salad(0, 0); //Overall abhi tak ai-kbj=sum and i

	if (ans <= 0) {
		cout << "-1" << endl;
	} else {
		cout << ans << endl;
	}
}