#include <bits/stdc++.h>
 
using namespace std;
 
 
 
 
void solve() {
    int n;
    cin>>n;
    vector <int> a(n);
    for (int i=0;i<n;i++)cin>>a[i];
    int mx=a[0];
    for (int i=0;i<n;i++){
        if (a[i]>mx){
            mx=a[i];
        }
    }
    cout<<n*mx<<endl;
 
 
 
}
int main() {
    int t;
    cin >> t;
    while (t--) solve();
}