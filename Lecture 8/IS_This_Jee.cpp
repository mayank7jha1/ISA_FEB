#include<bits/stdc++.h>
using namespace std;
const int N = 0;
#define PI 3.1415926535

double Derivative(double x, double b, double c) {
	return ((sin(x) * ((2 * x) + b)) - ((x * x) + b * x + c) * cos(x));
}

double Is_This_JEE(double b, double c) {
	//You are trying to find out x.

	double s = 0;
	double e = PI / 2;
	double ans;
	int count = 0;
	while (s <= e) {
		double mid = (s + e) / 2;
		double val = Derivative(mid, b, c);

		//Since ye ek double val hain to iska equal hona near to impossible

		if (val < 0) {
			//Kya ye mera x- co-ordinate hosakta hain for min?
			//haan hosakta hain.
			ans = mid;
			s = mid;//This is also wrong?
			//mid=3.5
			//s=4.5;
			//ans=3.8887 This can be an answer
		} else {
			ans = mid;
			//THis can again be a x-cordinate for min.
			e = mid;
		}

		count++;
		if (count == 100) {
			//10^18:60/90
			//log(10^18):18*log2(10);
			break;
		}
	}
	return ans;
}

//s<=e
//s=1.339
//e=1.349

//Infinity?
//1.3391::::1.33911::1.339111:1.339111
//1.3392
//1.3393
//1.3394

//1-10: integer:9/10;

//decimal: infinty


int main() {
	int t;
	cin >> t;
	while (t--) {
		double b, c;
		cin >> b >> c;
		double ans = Is_This_JEE(b, c);

		cout << setprecision(11) << ans << endl;
	}
}