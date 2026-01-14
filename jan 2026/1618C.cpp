#include <bits/stdc++.h>
using namespace std;

using u128 = __uint128_t;
using ll = long long;

ll mulmod(ll a, ll b, ll mod) {
    return (u128)a * b % mod;
}

ll power(ll a, ll d, ll mod) {
    ll r = 1;
    while (d) {
        if (d & 1) r = mulmod(r, a, mod);
        a = mulmod(a, a, mod);
        d >>= 1;
    }
    return r;
}

bool isPrime(ll n) {
    if (n < 2) return false;
    for (ll p : {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37}) {
        if (n == p) return true;
        if (n % p == 0) return false;
    }
    ll d = n - 1, s = 0;
    while ((d & 1) == 0) {
        d >>= 1;
        s++;
    }
    for (ll a : {2, 325, 9375, 28178, 450775, 9780504, 1795265022}) {
        if (a % n == 0) continue;
        ll x = power(a, d, n);
        if (x == 1 || x == n - 1) continue;
        bool composite = true;
        for (int r = 1; r < s; r++) {
            x = mulmod(x, x, n);
            if (x == n - 1) {
                composite = false;
                break;
            }
        }
        if (composite) return false;
    }
    return true;
}

ll pollard(ll n) {
    if (n % 2 == 0) return 2;
    if (n % 3 == 0) return 3;
    ll x = rand() % n;
    ll y = x;
    ll c = rand() % n;
    if (c == 0) c++;
    ll d = 1;
    while (d == 1) {
        x = (mulmod(x, x, n) + c) % n;
        y = (mulmod(y, y, n) + c) % n;
        y = (mulmod(y, y, n) + c) % n;
        d = __gcd(llabs(x - y), n);
        if (d == n) return pollard(n);
    }
    return d;
}

void factorize(ll n, vector<ll> &factors) {
    if (n == 1) return;
    if (isPrime(n)) {
        factors.push_back(n);
        return;
    }
    ll d = pollard(n);
    factorize(d, factors);
    factorize(n / d, factors);
}

vector<ll> getDivisors(ll n) {
    vector<ll> primes;
    factorize(n, primes);
    sort(primes.begin(), primes.end());
    vector<pair<ll, int>> pf;
    for (ll p : primes) {
        if (pf.empty() || pf.back().first != p)
            pf.push_back({p, 1});
        else
            pf.back().second++;
    }
    vector<ll> divisors = {1};
    for (auto &pr : pf) {
        ll p = pr.first;
        int cnt = pr.second;
        vector<ll> temp;
        ll cur = 1;
        for (int i = 0; i <= cnt; i++) {
            for (ll x : divisors)
                temp.push_back(x * cur);
            cur *= p;
        }
        divisors.swap(temp);
    }
    sort(divisors.begin(), divisors.end());
    return divisors;
}

void solve(){
    long long n;
    cin>>n;
    vector <long long> a;
    for (int i=0;i<n;i++){
        long long t;cin>>t;a.push_back(t);
    }
    long long g1=0,g2=0;
    for (int i=0;i<n;i+=2) g1=__gcd(g1,a[i]);
    for (int i=1;i<n;i+=2) g2=__gcd(g2,a[i]);
    if (g1==0) g1=a[0];
    if (g2==0) g2=a[1];

    int f1=1;
    for (int i=1;i<n;i+=2) if (a[i]%g1==0) f1=0;
    if (f1 && g1!=1){cout<<g1<<'\n';return;}

    int f2=1;
    for (int i=0;i<n;i+=2) if (a[i]%g2==0) f2=0;
    if (f2 && g2!=1){cout<<g2<<'\n';return;}

    cout<<0<<'\n';
}

int main(){
    int t=1;
    cin>>t;
    while (t--){
        solve ();
    }
}
