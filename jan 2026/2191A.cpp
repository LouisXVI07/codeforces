#include <bits/stdc++.h>
 
using namespace std;
 
 
 
 
void solve() {
    int n;
    cin >> n;
    vector < pair < int, int >> v;
 
    for (int i = 0; i < n; i++) {
        int temp;cin>>temp;
        v.push_back({
            temp,
            i % 2
        });
    }
    
    sort (v.begin(),v.end());
    int fg=1;
   for (int i=0;i<n-1;i++){
       if (v[i].second==v[i+1].second){
           fg=0;break;
       }
   }
   if (fg)cout<<"YES"<<'\n';
   else cout<<"NO"<<'\n';
   
 
 
 
}
int main() {
    int t;
    cin >> t;
    while (t--) solve();
}