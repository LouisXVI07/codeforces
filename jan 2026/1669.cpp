#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin>>n;
    vector <long long> a(n);
    for (int i=0;i<n;i++)cin>>a[i];
    vector <long long> sf(n);
    vector <long long> pr(n);
    sf[n-1]=a[n-1];
    pr[0]=a[0];
    for(int i=1;i<n;i++){
        pr[i]=pr[i-1]+a[i];
    }
    for (int i=n-2;i>=0;i--){
        sf[i]=sf[i+1]+a[i];

    }
    long long mx=0;
    long long i=0,j=n-1;
    while(i<j){
        if (sf[j]==pr[i]){
            mx=i+1+n-j;
            i++;j--;
        }
        else if (sf[j]>pr[i]){
            i++;
        }
        else {
            j--;
        }
    }
    cout<<mx<<endl;
}
int main(){
    int t=1;
    cin>>t;
    while (t--){
        solve ();
    }
}