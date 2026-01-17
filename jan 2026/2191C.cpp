#include <bits/stdc++.h>
 
using namespace std;
 
 
 
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin>>s;
 
    int cn = 0;
    int fg = 0;
    int fs = 1;
    int t = 0, k = 0;
    int cn0=0; int oo=1,oz=1; int ff=1;
    for (int i=0;i<n;i++){
        if (s[i]=='0'){
            cn0++;
            oz=i;
        }
        else {
            if (ff==1 && s[i]=='1'){
                oo=i;ff=0;
                
            }
        }
    }
    for (int i = 0; i < n; i++) {
 
        if (fg == 0 && s[i] == '1') {
            fg = 1;
            if (fs) t = i;
        }
        else if (fg == 1 && s[i] == '0') {
            fg = 0;
            cn++;
            if (fs) {
                k = i;
                fs = 0;
            }
        }
 
    }
    int m=0;
    vector <int> ans;
    for (int i=0;i<cn0;i++){
        if (s[i]=='1'){m++; ans.push_back(i+1);}
        
    }
    for (int i=0;i<n-cn0;i++){
        if (s[n-i-1]=='0'){
            ans.push_back(n-i);
        }
    }
    sort(ans.begin(),ans.end());
    if (cn==0)cout<<"Bob"<<'\n';
    else {
       
        cout<<"Alice"<<endl<<2*m<<endl;
        for (int i=0;i<2*m;i++){
            cout<<ans[i]<<' ';
        }
        cout<<endl;
            
        
    }
    
 
 
}
int main() {
    int t;
    cin >> t;
    while (t--) solve();
}