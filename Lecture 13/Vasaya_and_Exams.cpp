#include<bits/stdc++.h>
using namespace std;
const int N = 0;
#define int long long


int32_t main() {
	int n, r, Required_Average;
	cin >> n >> r >> Required_Average;

	//aapko ye a[i] and b[i] lena hain.
	//vector ka pair lesakte ho.
	//based on eassay aapko asc order me sort marna hain.

	int my_sum = 0;
	vector<pair<int, int>>v;

	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;//x--->a[i]-->grade jo aapko exam me mila
		//y--->agar aapko is exam ka grade +1 karna hain
		//toh y essay lagenge.

		my_sum += x;
		v.push_back({y, x});

	}

	sort(v.begin(), v.end());

	int ans = 0;
	int i = 0;

	int Required_Grade_Point = (Required_Average * n - my_sum);


	while (Required_Grade_Point > 0 and v[i].second <= r) {
		//Check Karo ki Required_Grade Point and r-v[i].second me chota kaun hain.
		int value = min(Required_Grade_Point, r - v[i].second);//(3,4)

		ans = ans + value * v[i].first;//agar tumne is subject value grade points badhaye toh tumhe kitne essay likhne padhenge.

		//ab my will increase kyu because tumhe abhi upar kuch grade point badha diye.

		my_sum = my_sum + value;
		i++;
	}

	cout << ans << endl;
}


//My_Sum=17;
//Required_Sum=20;

//Required_Grade_Point=3;

// 5 5 4
// 5 2
// 4 7
// 1 1
// 4 2
// 3 5


//My sum=17