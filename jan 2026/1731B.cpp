#include <bits/stdc++.h>
#define int long long
const int mod = 1e9 + 7;
using namespace std;


void solve() {
	int n;
	cin >> n; 

	
	int ans = ((((n * (n + 1)) % mod) * (4 * n - 1)) % mod * 337) % mod;


	cout << ans << endl;
}

int32_t main() {
	int t;
	cin >> t; 


	while (t--) {
		solve();
	}


}