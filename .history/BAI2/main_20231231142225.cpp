#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    freopen("BAI2.INP", "r", stdin);
    freopen("BAI2.OUT", "w", stdout);
    int n, c; cin >> n >> c;
    int a[n+1];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n-1; i++) {
        int j = i+1;
        while (j < n && a[j] - a[i] <= c) j++;
        cout << i+1 << " " << j << "\n";
    }
    return 0;
}
