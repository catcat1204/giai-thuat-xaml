#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    freopen("TINHIEU.INP", "r", stdin);
    freopen("TINHIEU.OUT", "w", stdout);
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 0) a[i] = -1;
    }
     for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 0) a[i] = -1;
    }
    map<int, int> count;
    count[0] = 1;
    int s = 0;
    ll k = 0;
    for (int i = 0; i < n; i++) {
        s += a[i];
        k += count[s];
        count[s]++;
    }
    cout << res;
    return 0;
}
