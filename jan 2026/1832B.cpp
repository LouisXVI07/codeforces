#include <bits/stdc++.h>

#define int long long
using namespace std;
//long long->int
void solve() {
    int n, k;
    cin >> n >> k; 

    vector < int > v(n); 
    for (auto & it: v) cin >> it; 

    sort(v.begin(), v.end()); 

    vector < int > pre(n); 
    pre[0] = v[0]; 
    for (int i = 1; i < n; i++) { 
        pre[i] = v[i] + pre[i - 1];
    }

    int ans = 0; 
    for (int first = 0; first <= k; first++) {  
        int second = k - first; 
        int left = 2 * first; 
        int right = n - second - 1; 
        int sum = pre[right] - (left == 0 ? 0 : pre[left - 1]); 
        ans = max(ans, sum); 
    }

    cout << ans << endl;


}
int32_t main() {
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}