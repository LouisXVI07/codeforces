#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector < int > a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int ans = -1;
    for (int i=0;i<n;i++){
        if (a[i]!=i){
            ans=a[i];   
        }   
    }
    for (int i = 0; i < n; i++) {
        if (a[i] != i) {
           
            ans &= a[i];
        }
    }
    //if (ans == -1) ans = 0;
    cout << ans << '\n';

}
int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}