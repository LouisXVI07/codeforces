#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    int st=0;
    int fg=1;
    int cl=0,op=0;
    
    for (int i=0;i<n;i++){
        if (fg){
            if (s[i]=='('){
                
                st++;
            }
            else {
                fg=0;
                while(i<n){
                    if (s[i]==')')cl++;
                    if (s[i]=='('){
                        st++;
                        
                        break;
                    }
                    
                    i++;
                }
                cl--;

            }
        }
       
        else {
            if (s[i]=='(')op++;
            else cl++;
        } 
    }
    if (st>cl){
        cout<<-1<<'\n';
        return;}
    
    int dif =cl-st;
    cout<<2*st+ 2*min(dif , op)<<'\n';

}

int main(){
    int t=1;
    cin>>t;
    while (t--){
        solve ();
    }
}