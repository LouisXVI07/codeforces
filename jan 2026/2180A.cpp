#include <bits/stdc++.h>
using namespace std;

void solve() {
    int l, a, b;
    cin >> l >> a >> b;
    int g = __gcd(l, b);
    int k = (l - 1 - a) / g;
    cout << a + k * g << '\n';
}

int main() {


    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}