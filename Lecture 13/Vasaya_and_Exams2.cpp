#include<bits/stdc++.h>
using namespace std;
const int N = 0;
#define int long long


int32_t main() {
	int n, max_grade, Required_Average;
	cin >> n >> max_grade >> Required_Average;

	//This gives you the total sum of your grades.
	int my_sum = 0;

	//This is a vector of pair and it stores the essay will have to write,the grade you
	//got in that subject in this order as a pair.

	vector<pair<int, int>>v;

	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		my_sum += x;
		v.push_back({y, x});

	}

	//Because we want the min essay subject first and if we want to
	//increase our grade we will use this subject for writing essays.

	sort(v.begin(), v.end());

	int ans = 0;
	int i = 0;

	int Required_Grade_Point = (Required_Average * n - my_sum);


	while ((Required_Average * n - my_sum) > 0 and v[i].second <= max_grade) {

		//Value represents ki current subject se aap kitne maximum grade point badha sakte ho

		int value = min((Required_Average * n - my_sum), max_grade - v[i].second);

		//Answer represents ki aap kitne essay ab tak likh chuke ho
		ans = ans + value * v[i].first;

		my_sum = my_sum + value;

		i++;
	}

	cout << ans << endl;
}

