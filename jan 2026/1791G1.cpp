#include <bits/stdc++.h>

#define int long long
using namespace std;
//long long->int
void solve() {
    int n, c;
    cin >> n >> c;
    vector < int > a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector < int > cst(n);
    for (int i = 0; i < n; i++) {
        cst[i] = i + 1 + a[i];

    }
    sort(cst.begin(), cst.end());
    int sum = 0;
    int ans = 0;
    int i = 0;
    // while(sum<=c && i<n ){
    //     if (c>=cst[i]){
    //         ans++;
    //         i++;
    //         sum+=cst[i];
    //         c-=cst[i];
    //     }
    //     else break;
    // }
    for (int i = 0; i < n; i++) {
        sum += cst[i];
        if (sum > c) break;
        ans++;
    }
    cout << ans << '\n';
}
int32_t main() {
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}