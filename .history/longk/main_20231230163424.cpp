#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    freopen("LONGK.INP", "r", stdin);
    freopen("LONGK.OUT", "w", stdout);
    int n, d; cin >> n;
    int a[n];
    map<int, int> ts;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        ts[a[i]]++;
    }
    for (int i = 0; i < n; i++) {
        if (ts[a[i]] == 1) {
            cout << a[i];
            return 0;
        }
    }
    return 0;
}
