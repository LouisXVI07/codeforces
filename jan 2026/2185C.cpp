#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
 
    unordered_set<long long> s;
    for (auto x : a) s.insert(x);
 
    long long ans = 0;
 
    for (auto x : s) {
        if (!s.count(x - 1)) {   
            long long cur = x;
            long long len = 0;
            while (s.count(cur)) {
                len++;
                cur++;
            }
            ans = max(ans, len);
        }
    }
 
    cout << ans << '\n';
}
 
int main() {
    int t;
    cin >> t;
    while (t--) solve();
}