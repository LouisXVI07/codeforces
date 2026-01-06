#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int ans=0;
    while (n--){
        string s;
        cin>>s;
        if (s[0]=='+' || s[2]=='+'){
            ans++;
        }
        else{
            ans--;
        }
    }
    cout<<ans<<'\n';
}
int main(){
    int t=1;
    //cin>>t;
    while (t--){
        solve ();
    }
}