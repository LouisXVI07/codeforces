#include <bits/stdc++.h>
using namespace std;


void solve() {
	long long n;
	cin >> n;
	long long l, r;
	cin >> l >> r;
	vector<long long> ans; 

	
	for (int i = 1; i <= n; i++) {
		
		long long temp = ((l + i - 1) / i) * i;
		ans.push_back(temp); 

	
		if (temp > r) {
			cout << "NO" << endl;
			return;
		}
	}


	cout << "YES" << endl;
	for (auto it : ans) {
		cout << it << " ";
	}
	cout << endl;

}

int main() {

	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
}
