#include <bits/stdc++.h>

#define int long long
using namespace std;
//long long->int
void solve() {
    int n, k;
    cin >> n >> k;
    vector < vector < int >> a(n, vector < int > (n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cin >> a[i][j];
    }
    int fg = 1;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int ni = n - 1 - i, nj = n - 1 - j;

            if (i < ni || (i == ni && j < nj)) { 
                if (a[i][j] != a[ni][nj]) ans++;
            }
        }
    }
    if (ans > k) cout << "NO\n";
    else {
        if (n % 2 == 1) cout << "YES\n";
        else {
            if ((k - ans) % 2 == 0) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    // cout<<ans<<'\n';

}
int32_t main() {
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}