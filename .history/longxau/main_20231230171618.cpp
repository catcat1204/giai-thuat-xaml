#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    freopen("LONGXAU.INP", "r", stdin);
    freopen("LONGXAU.OUT", "w", stdout);
    int n; cin >> n;
    string s; cin >> s;
    map<string, int> p = { "aa": 0, "ab": 1, "bb" : 0, "ba" : -1};
    for (int i = 0; i < n; i++) {
        string t = s.substr(i, 2);
        cout << t << '\n';
    }
    return 0;
}
