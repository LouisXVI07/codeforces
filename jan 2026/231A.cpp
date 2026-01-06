#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int cn=0;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        if (a+b+c>=2){
            cn++;
        }
    }
    cout<<cn;
}
int main(){
    int t=1;
    //cin>>t;
    while (t--){
        solve ();
    }
}