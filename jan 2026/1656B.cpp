#include <bits/stdc++.h>

using namespace std;




void solve() {
    long long n, k;
    cin >> n >> k;
    vector < long long > a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int fg = 0;
    sort(a.begin(), a.end());
    int i = 0, j = 1;

    while (j < n) {
        long long diff = a[j] - a[i];

        if (i == j) {
            j++;
            continue;
        }

        if (diff == k) {
            cout << "YES\n";
            return;
        }
        if (diff < k) j++;
        else i++;
    }
    cout << "NO\n";



}
int main() {
    int t;
    cin >> t;
    while (t--) solve();
}