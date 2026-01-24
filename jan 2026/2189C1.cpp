#include <bits/stdc++.h>

#define int long long
using namespace std;
//long long->int

void solve() {
    int n;
    cin >> n;
    vector <int> a(n);
    if (n % 2 == 0) a[0] = n;
    else a[0] = n - 1;
    a[n - 1] = 1;
    for (int i = 1; i < n - 1; i++) {
        if ((i + 1) % 2 == 0) {
            a[i] = i + 2;
        }
        else a[i] = i;
    }
    for (int i = 0; i < n; i++) cout << a[i] << ' ';
    cout << '\n';


}
int32_t main() {
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}