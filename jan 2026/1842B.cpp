#include <bits/stdc++.h>
#define int long long
using namespace std;
//long long->int
void solve(){
    int n,x;
    cin>>n>>x;
    vector <int> a(n),b(n),c(n);
    for (int i=0;i<n;i++)cin>>a[i];
    for (int i=0;i<n;i++)cin>>b[i];
    for (int i=0;i<n;i++)cin>>c[i];

    int i1=0,i2=0,i3=0;
    //x is target
    int temp=x;
    set <int> used;
    int f1=1, f2=1, f3=1;
    while(1){
        int p=a[i1], q=b[i2], r=c[i3];
        if ((p&x)==p && p<=x && f1==1){
            if (i1!=n-1) i1++;
            else f1=0;
            auto it = used.lower_bound(p);
            
            if(it != used.end() && *it == p){
                    continue;  // already used
            }
            used.insert(p);
            if ((!(!(temp)&x)&p)==0)continue;
            temp-=p;
            
        }
        else if ((q&x)==q && q<=x && f2==1){
            
            if (i2!=n-1)i2++;
            else f2=0;
            auto it = used.lower_bound(q);
            
            if(it != used.end() && *it == q){
                    continue;  // already used
            }
            used.insert(q);
            if ((!(!(temp)&x)&q)==0)continue;
            temp-=q;
        }
        else if ((r&x)==r  && r<=x && f3==1){
            if (i3!=n-1)i3++;
            else f3=0;
            auto it = used.lower_bound(r);
            
            if(it != used.end() && *it == r){
                    continue;  // already used
            }
            used.insert(r);
            if ((!(!(temp)&x)&r)==0)continue;
            temp-=r;
            
        }
        else {
            break;
        }
        if (temp==0)break;
        if (i1==n-1 && i2 ==n-1 && i3==n-1)break;

    }
    if (temp==0)cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
}
int32_t main(){
    int t=1;
    cin>>t;
    while (t--){
        solve ();
    }
}