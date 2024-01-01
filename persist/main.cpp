#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll doben(ll t, ll d) {
    ll k=1;
    while(t != 0) {
        k*=t%10;
        t/=10;
    }
    d+=1;
    if (k/10==0) {
        return d;
    };
    return doben(k, d);
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    freopen("PERSIST.INP", "r", stdin);
    freopen("PERSIST.OUT", "w", stdout);
    ll n; cin >> n;
    ll dmax = 0;
    ll nmax = 0;
    for (ll i = n-1; i > 0;i--) {
        ll ben = doben(i , 0);
        if (ben> dmax) {
            nmax = i;
            dmax = ben;
        }
    }
    cout << nmax << " " << dmax;
    return 0;
}
