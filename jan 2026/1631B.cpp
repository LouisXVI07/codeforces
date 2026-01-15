#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin >> n;
    vector<long long> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    
    long long ls = a[n-1];
    long long cn = 1;
    long long ans = 0;

    for(int i = n - 2; i >= 0; i--) {
        if(a[i] == ls) cn++;
        else {
            ans++;
            i -= cn - 1;
            cn *= 2;
        }
        if(cn >= n) break;
    }

    cout << ans << '\n';
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
