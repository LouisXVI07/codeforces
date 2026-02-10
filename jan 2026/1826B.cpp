#include <bits/stdc++.h>
#define int long long
using namespace std;
//long long->int
void solve(){
    int n;
    cin>>n;
    vector <int> a(n);
    for (int i=0;i<n;i++)cin>>a[i];
    vector <int> dif;
    for (int i=0;i<n/2;i++){
        dif.push_back(abs(a[i]-a[n-1-i]));
    }
    int g = 0;

    for(int x : dif)g = __gcd(g, x);
    cout<<g<<'\n';

}   

int32_t main(){
    int t=1;
    cin>>t;
    while (t--){
        solve ();
    }
}