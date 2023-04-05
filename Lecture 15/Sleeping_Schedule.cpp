#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;

int n, h, l, r;
int a[N];

int Sleeping_Schedule(int i, int waking_hour) {


	//when will you stop: jab aapne saari sleep karli?
	//0 se lekar n-1 tak ki sleep aapne karli toh aap stop hojao.

	if (i == n) {
		//Main kya return karu?

		//Agr maine 0 - n-1 tak ki saari sleep karli hain
		//toh iska matlab hain ki mujhe ye pata chal gaya hain
		//ki is path me kitni good sleep hain and main
		//is path ka answer already user ko bata diya hoga and
		//agar ye path ka good sleep max hoga to max good sleep
		//update bhi hojayega.

		//Main abhi nth path khda hu mujhe koi sleep nahi karni
		//and maine answer nikal liya hoga to directly return
		//kardu ek aisa number isse mere answer par impact na pade.

		return 0;
	}

	//i==0
	//Aap abhi 0th Sleep karna chahte ho and aap baaki recursion se
	//karvaoge.

	int option1_Waking_hour = (waking_hour + a[i]) % h;

	int option2_Waking_Hour = (waking_hour + a[i] - 1) % h;

	//inme se konsi sleep good hain ye to batao tabhi
	//toh main recursion ko bolunga ki is sleep ko add
	//karke answer nikalo

	int flag1 = 0;
	int flag2 = 0;

	if (option1_Waking_hour >= l and option1_Waking_hour <= r) {
		flag1 = 1;
	}

	if (option2_Waking_Hour >= l and option2_Waking_Hour <= r) {
		flag2 = 1;
	}


	int op1 = flag1 + Sleeping_Schedule(i + 1, option1_Waking_hour);

	int op2 = flag2 + Sleeping_Schedule(i + 1, option2_Waking_Hour);

	return max(op1, op2);
}

int main() {
	cin >> n >> h >> l >> r;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout << Sleeping_Schedule(0, 0) << endl;
}