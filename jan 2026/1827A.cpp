#include <bits/stdc++.h>

#define int long long
using namespace std;
//long long->int
void solve() {
    int n;
    cin >> n;
    vector < int > a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    int pos = 1;
    sort(a.begin(), a.end());
    const int m = 1000000007;
    sort(b.begin(), b.end());
    for (int i = 0; i < n; i++) {
        int idx = -1;
        bool es = false;
        bool gl = false;

        auto it = lower_bound(b.begin(), b.end(), a[i]);

        if (it == b.end()) {
            gl = true;
        }
        else {
            idx = it - b.begin();
            if (idx == 0)
                es = true;
        }
        
        if (es){
            cout<<0<<'\n';return;
        }
        if (gl){
            pos=(pos*(n-i))%m;
        }
        else {
            pos=(pos*(idx-i))%m;
        }

    }
    cout << pos << '\n';
}
int32_t main() {
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}