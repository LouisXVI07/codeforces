#include <bits/stdc++.h>
#define int long long
using namespace std;
//long long->int
void solve(){
    int n;
    cin>>n;
    vector <int> a(n),b(n);
    for (int i=0;i<n;i++)cin>>a[i];
    for (int i=0;i<n;i++)cin>>b[i];
    int p=0,q=0;
    int fg=0;
    for (int i=0;i<n;i++){
        if (fg==0){
            if (a[i]!=b[i]){
                p=i+1;
                fg=1;
            }
        }
        else {
            if (a[i]!=b[i]){
                q=i+1;
            }
        }
    }

    //lb
    for (int i=p-1;i>0;i--){
        if (b[i]>=a[i-1]){
            p--;
            
        }
        else break;
    }
    //ub
    for(int i=q-1;i<n-1;i++){
        if (b[i]<=a[i+1]){
            q++;
        }
        else break;
    }
    cout<<p<<' '<<q<<'\n';

}
int32_t main(){
    int t=1;
    cin>>t;
    while (t--){
        solve ();
    }
}