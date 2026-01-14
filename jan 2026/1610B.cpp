#include <bits/stdc++.h>
using namespace std;

bool is_pal(const vector<long long> &a, long long x) {
    int i = 0, j = a.size() - 1;
    while (i < j) {
        if (a[i] == x) { i++; continue; }
        if (a[j] == x) { j--; continue; }

        if (a[i] != a[j]) return false;
        i++;
        j--;
    }
    return true;
}

void solve() {
    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int i = 0, j = n - 1;
    while (i < j && a[i] == a[j]) {
        i++;
        j--;
    }

    if (i >= j) {
        cout << "YES\n";
        return;
    }

    if (is_pal(a, a[i]) || is_pal(a, a[j])) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
