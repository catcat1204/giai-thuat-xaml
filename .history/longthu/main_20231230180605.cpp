#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int base = 311;
const int mod = 1e9+7;
ll POW[50005], hashS[50005], n, k;
string s;

ll get(int i, int j) {
    return (hashS[j] - hashS[i-1]*POW[j-i+1] + mod*mod) % mod;
}

bool check(int mid) {
    unordered_map<ll, int> m;
    for (int i=1; i<=n-mid+1; i++) {
        ll hashValue = get(i, i+mid-1);
        m[hashValue]++;
        if (m[hashValue] >= k) return true;
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    freopen("LONGTHU.INP", "r", stdin);
    freopen("LONGTHU.OUT", "w", stdout);
    cin >> n >> k;
    cin >> s;
    s = " " + s;
    POW[0] = 1;
    for (int i=1; i<=n; i++) {
        POW[i] = (POW[i-1]*base) % mod;
        hashS[i] = (hashS[i-1]*base + s[i]) % mod;
    }
    int l = 1, r = n, res = 0;
    while (l <= r) {
        int mid = (l+r) >> 1;
        if (check(mid)) {
            res = mid;
            l = mid + 1;
        } else r = mid - 1;
    }
    cout << res;
    return 0;
}