#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;

int n, h, l, r;
int a[N];

int Sleeping_Schedule(int i, int waking_hour) {

	if (i == n) {
		return 0;
	}

	int option1_Waking_hour = (waking_hour + a[i]) % h;

	int option2_Waking_Hour = (waking_hour + a[i] - 1) % h;

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
	//cout << "jgjbvj";
}