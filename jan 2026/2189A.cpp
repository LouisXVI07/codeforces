#include <bits/stdc++.h>
 
using namespace std;
 
 
 
 
void solve() {
    int n,h,l;
    cin>>n>>h>>l;
    vector <int> a(n);
    for (int i=0;i<n;i++)cin>>a[i];
    int cn=0;
    sort(a.begin(),a.end());
    vector <int> mask(n,1);
    
    for (int i=n-1;i>0;i--){
        int m=a[i];
        if (mask[i]==0)continue;
        if (a[i]>max(l,h))continue;
        for (int j=i-1;j>=0;j--){
            if (a[j]<=min(l,h) && mask[j]==1){
                cn++;
                mask[i]=0;mask[j]=0;
                break;
            }
        }
    }
    cout<<cn<<'\n';
 
 
 
}
int main() {
    int t;
    cin >> t;
    while (t--) solve();
}