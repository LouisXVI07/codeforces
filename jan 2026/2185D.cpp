#include <bits/stdc++.h>
 
using namespace std;
 
 
 
 
void solve() {
    int n,m,h;
    cin>>n>>m>>h;
    vector<int> a(n);
    vector <int> ori(n);
    for (int i=0;i<n;i++){
        cin>>a[i];
        ori[i]=a[i];
    }
    vector <int> mod;
    for (int i=0;i<m;i++){
        int b,c;
        cin>>b>>c;
        a[b-1]=a[b-1]+c;
        mod.push_back(b-1);
        if (a[b-1]>h){
            for (int j=0;j<mod.size();j++){
                a[mod[j]]=ori[mod[j]];
            }
            mod.clear();
        }
        
    }
    for (int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
    cout<<endl;
 
 
 
}
int main() {
    int t;
    cin >> t;
    while (t--) solve();
}