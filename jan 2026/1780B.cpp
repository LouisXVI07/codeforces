#include <bits/stdc++.h>
#define int long long
using namespace std;
//long long->int
void solve(){
    int n;
    cin>>n;
    vector <int> a(n);
    int ttl=0;
    for (int i=0;i<n;i++){cin>>a[i];ttl+=a[i];}
    
    vector <int> pr(n);
    pr[0]=a[0];
    for (int i=1;i<n;i++){
        pr[i]=pr[i-1]+a[i];
    }
    int ans =0;
    for (int i=0;i<n-1;i++){
    ans = max(ans, __gcd(pr[i], ttl - pr[i]));
    }

    cout<<ans<<'\n';
}
int32_t main(){
    int t=1;
    cin>>t;
    while (t--){
        solve ();
    }
}