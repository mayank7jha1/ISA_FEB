#include<bits/stdc++.h>
using namespace std;

#define int long long
const int val = 1e13;

string a;
int nb, ns, nc, pb, ps, pc, sb = 0, ss = 0, sc = 0, r;


int Hamburgers() {

	int s = 0;
	int e = val;

	//First Calculate ki ek hamburger me kitne bread,sausage and
	//cheese chahiye.

	//Iterate over the recipe and calculate the above said.
	//Recipe ki maximum length :: 100:

	for (int i = 0; i < a.length(); i++) {
		if (a[i] == 'B') {
			sb++;
		} else if (a[i] == 'S') {
			ss++;
		} else {
			sc++;
		}
	}

	int ans = -1;
	while (s <= e) {

		int mid = (s + e) / 2;
		//You want to check ki kya aap mid amount of hamburger
		//bana paarahe hain?

		int total_price_required_for_bread =
		    (((mid * sb) - nb) * pb) < 0 ? 0 : (((mid * sb) - nb) * pb);


		int total_price_required_for_sausage = 0;

		if ((((mid * ss) - ns) * ps) < 0) {
			total_price_required_for_sausage = 0;
		} else {
			total_price_required_for_sausage = (((mid * ss) - ns) * ps);
		}


		int total_price_required_for_cheese =
		    (((mid * sc) - nc) * pc) < 0 ? 0 : (((mid * sc) - nc) * pc);


		int total_price = total_price_required_for_sausage + total_price_required_for_bread +
		                  total_price_required_for_cheese;


		if (total_price <= r) {
			s = mid + 1;
			ans = mid;
		} else {
			e = mid - 1;
		}


	}


	return ans;
}







int32_t main() {
	cin >> a;
	cin >> nb >> ns >> nc;
	cin >> pb >> ps >> pc;
	cin >> r;

	cout << Hamburgers() << endl;
}