#include<iostream>
#include<algorithm>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n + 1];

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	int ans = 0;

	sort(a + 1, a + n + 1);

	for (int i = 1; i <= n; i++) {
		ans = ans + abs(i - a[i]);
	}

	cout << ans << endl;
}


//Thursday: