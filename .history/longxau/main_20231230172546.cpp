#include <bits/stdc++.h>
#define ll long long

using namespace std;

int st(string s) {
    if (s == "aa") return 0;
    if (s == "ab") return 1;
    if (s == "bb") return 0;
    if (s == "ba") return -1;
    return 0;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    freopen("LONGXAU.INP", "r", stdin);
    freopen("LONGXAU.OUT", "w", stdout);
    int n; cin >> n;
    string s; cin >> s;
    for (int i = 0; i < n; i++) {
        string t = s.substr(i, 2);
        if (t[0] == 'a' && t[1] == '?') t = "ab";
        if (t[0] == '?' && t[1] == 'b') t = "ab";
        cout << t << " " << st(t) << '\n';
    }
    return 0;
}
