#include <bits/stdc++.h>
#define int long long
using namespace std;
//long long->int
void solve(){
    int n;
    cin>>n;
    vector <int> a(n);
    int cn=0;
    for (int i=0;i<n;i++){cin>>a[i];if (a[i]<0)cn++;}
    sort(a.begin(),a.end());
    int sm=0;
    if (cn%2==0){
        for (int i=0;i<n;i++){
            sm+=abs(a[i]);
        }

    }
    else {
        int fg=1;
        int mn=abs(a[0]);
        for (int i=0;i<n;i++){
            mn=min(mn,abs(a[i]));
        }
        for (int i=0;i<n;i++){
            if ((a[i]==mn || a[i]==-1*mn) && fg==1){
                sm+=-1*abs(a[i]);fg=0;continue;
            }
            sm+=abs(a[i]);
        }
    }
    cout<<sm<<'\n';

}
int32_t main(){
    int t=1;
    cin>>t;
    while (t--){
        solve ();
    }
}