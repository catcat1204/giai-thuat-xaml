#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    freopen("LONGTHU.INP", "r", stdin);
    freopen("LONGTHU.OUT", "w", stdout);
    int n, k; cin >> n >> k;
    string s; cin >> s;
    map<string, int> ts;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i + 1; j++) {
            string t = s.substr(j, i);
            cout << t << '\n';
        }
    }
    return 0;
}
