#include <bits/stdc++.h>
#define ll long long

using namespace std;


ll countPairs(map<ll, ll> ts) {
    ll count = 0;
    for(auto it = ts.begin(); it != ts.end(); it++) {
        if(it->second > 1) {
            count += combination(it->second, 2);
        }
    }
    return count;
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    freopen("LONGK.INP", "r", stdin);
    freopen("LONGK.OUT", "w", stdout);
    ll n, d; cin >> n;
    ll a[n];
    map<ll, ll> ts;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        ts[a[i]]++;
    }
    for (int k = 0; k < n; k++) {
        
    }
    return 0;
}
