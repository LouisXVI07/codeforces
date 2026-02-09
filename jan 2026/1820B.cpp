#include <bits/stdc++.h>

#define int long long
using namespace std;
//long long->int
void solve() {
    string s;
    cin >> s;
    int n = s.length();
    
    int ans = 0, cur = 0;

    for (int i = 0; i < 2 * n; i++) {
        if (s[i % n] == '1') {
            cur++;
            ans = max(ans, cur);
        }
        else cur = 0;
    }

    int cn=min(ans, n);
    //cout<<cn<<'\n';
    if (cn == 0) {
        cout << 0 << '\n';
        return;
    }
    if (cn == 1) {
        cout << 1 << '\n';
        return;
    }
    if (cn==n){
        cout << n*n << '\n';
        return;
    }
    
    if (cn%2==0){
        cout<<cn/2*(cn/2+1)<<'\n';
        return;
    }
    else {
    
        cout<<(cn/2+1)*(cn/2+1)<<'\n';
        return;
    }
    



}
int32_t main() {
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}