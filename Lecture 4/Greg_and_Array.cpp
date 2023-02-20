#include<bits/stdc++.h>
using namespace std;
#define size 101000

int main() {

	int n, m, k;
	cin >> n >> m >> k;

	int a[n + 1] = {0};//n+1 size ka array?//1 Based

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	int l[size], r[size], d[size];


	for (int i = 1; i <= m; i++) {
		cin >> l[i] >> r[i] >> d[i];
	}

	// for (int i = 1; i <= m; i++) {
	// 	cout << l[i] << " " << r[i] << " " << d[i] << endl;
	// }
	//Query ka input:

	//Konsa operation kitni bar aaraha hain usko yahi resolve kar karleta hu
	int operations_count[size] = {0};

	for (int i = 0; i < k; i++) {
		int x, y;
		cin >> x >> y;

		operations_count[x] = operations_count[x] + 1;//Slow operation
		// operations_count[x]++;
		//operations_count += 1;

		operations_count[y + 1] = operations_count[y + 1] - 1;
	}

	for (int i = 1; i <= m; i++) {
		operations_count[i] = operations_count[i - 1] + operations_count[i];
	}


	// for (int i = 1; i <= m; i++) {
	// 	cout << operations_count[i] << " ";
	// }

	//Aapko operation vaali cheeze ko resolve karna hain.

	int difference[size] = {0};

	for (int i = 1; i < size; i++) {
		int x = l[i], y = r[i];
		difference[x] = difference[x] + (operations_count[i] * d[i]);
		difference[y + 1] = difference[y + 1] - (operations_count[i] * d[i]);

	}

	for (int i = 1; i < size; i++) {
		difference[i] = difference[i - 1] + difference[i];
	}



	for (int i = 1; i <= n; i++) {
		a[i] = a[i] + difference[i];
	}

	for (int i = 1; i <= n; i++) {
		cout << a[i] << " ";
	}
}




//Operation array : store konsa operation kitni bar karna hain.

//aapke operations kitne hain?
//m

//k = queries:


//Mistake: Yaad;


//Memory limit: 10^6 : memory limit ko exceed karna



