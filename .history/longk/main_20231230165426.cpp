#include <bits/stdc++.h>
#define ll long long

using namespace std;


ll countPairs(ll a[], ll n) {
    map<ll, ll> freq;
    for (ll i = 0; i < n; i++)
        freq[a[i]]++;

    ll count = 0;
    for (auto i : freq)
        count += ((i.second)*(i.second - 1))/2;

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
    for (int i = 0; i < n; i++) {
        d = 0;
        for (int j = 0; j < n; j++) {
            
            //if (i == j && a[i] == a[j]) continue;
            d+=ts[a[j]]*(ts[a[j]]-1)/2;
        }
        cout << d << '\n';
    }
    return 0;
}
