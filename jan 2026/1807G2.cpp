#include <bits/stdc++.h>
#define int long long
using namespace std;
//long long->int
void solve(){
    int n;
    cin>>n;
    vector <int> a(n);
    for (int i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end());
    if (a[0]!=1){cout<<"NO"<<'\n';return;}
    if (n!=1 && a[1]!=1){cout<<"NO"<<'\n';return;}
    int sm=0;
    for (int i=1;i<n;i++){
        sm+=a[i-1];
        if (sm<a[i]){
            cout<<"NO"<<'\n';return;
        }
    }
    cout<<"YES"<<'\n';
}
int32_t main(){
    int t=1;
    cin>>t;
    while (t--){
        solve ();
    }
}