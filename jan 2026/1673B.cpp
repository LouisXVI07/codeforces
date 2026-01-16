#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    long long n=s.length();
    string rep="";
    map<char, int>  mp;
    for (int i=0;i<n;i++){
        mp[s[i]]++;
        if (mp[s[i]]==1)rep=rep+s[i];
        else break;
    }
    long long t=rep.size();
    int j=0;
    int cn=0;
    int fg=1;
    for (int i=0;i<n;i++){
        if (s[i]!=rep[j]){
            fg=0;break;
        }
        j++;
        cn++;
        if (j==t)j=0;
    }
    if ( fg && cn==n){cout<<"YES"<<'\n';}
    else cout<<"NO"<<'\n';
    
}
int main(){
    int t=1;
    cin>>t;
    while (t--){
        solve ();
    }
}