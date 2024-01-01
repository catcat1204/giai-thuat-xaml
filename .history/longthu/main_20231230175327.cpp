#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    freopen("LONGTHU.INP", "r", stdin);
    freopen("LONGTHU.OUT", "w", stdout);
    int n, k; cin >> n >> k;
    string s; cin >> s;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; i++) {
            string t = s.substr(i, k);
            cout << t << '\n';
        }
    }
    return 0;
}
