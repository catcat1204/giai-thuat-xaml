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
    for (int i = 0; i < n-1; i++) {
        if (s[i] == 'a' && s[i+1] == '?') s[i+1] = 'b';
        if (s[i] == '?' && s[i+1] == 'b') s[i] = 'a';
    }
    for (int i = 0; i < n-1; i++) {
        if (s[i] == 'a' && s[i+1] == '?') s[i+1] = 'b';
        if (s[i] == '?' && s[i+1] == 'b') s[i] = 'a';
    }
    return 0;
}
