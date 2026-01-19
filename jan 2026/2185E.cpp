#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, m, k;
    cin >> n >> m >> k;
 
    vector<long long> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
 
    string s;
    cin >> s;
 
    sort(b.begin(), b.end());
 
    vector<long long> L(k + 1, 0), R(k + 1, 0);
    long long cur = 0;
 
    for (int i = 1; i <= k; i++) {
        cur += (s[i - 1] == 'R' ? 1 : -1);
        L[i] = max(L[i - 1], -cur);
        R[i] = max(R[i - 1], cur);
    }
 
    vector<long long> diff(k + 2, 0);
 
    for (int i = 0; i < n; i++) {
        long long pos = a[i];
        long long dl = 1e18, dr = 1e18;
 
        int id = lower_bound(b.begin(), b.end(), pos) - b.begin();
        if (id < m) dr = b[id] - pos;
        if (id > 0) dl = pos - b[id - 1];
 
        int die = k + 1;
 
        int t1 = lower_bound(R.begin() + 1, R.end(), dr) - R.begin();
        int t2 = lower_bound(L.begin() + 1, L.end(), dl) - L.begin();
 
        die = min(t1, t2);
 
        diff[1]++;
        if (die <= k) diff[die]--;
    }
 
    long long alive = 0;
    for (int i = 1; i <= k; i++) {
        alive += diff[i];
        cout << alive << " ";
    }
    cout << '\n';
}
 
int main() {
   
 
    int t;
    cin >> t;
    while (t--) solve();
}