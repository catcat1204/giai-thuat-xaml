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
    unordered_map<int, int> count;
    count[0] = 1;
    int sum = 0;
    ll res = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        res += count[sum];
        count[sum]++;
    }
    cout << res;
    return 0;
}
