#include <bits/stdc++.h>
 
using namespace std;
 
 
 
 
void solve() {
    int n;
    cin >> n;
    vector <int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    
    map <int,int> mp;
    for (int i=0;i<n;i++){
        mp[a[i]]++;
        
    }
 
    if (mp[0]==0)cout<<"NO"<<'\n';
    else if (mp[0]==1)cout<<"YES"<<'\n';
    else if (mp[0]>1 && mp[1]!=0)cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
 
 
}
int main() {
    int t;
    cin >> t;
    while (t--) solve();
}