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
        if (s[i] == '1') {
            for (int j = i+1; j < n; j++) {
                if (s[j] == '1') {
                    if (j-i > k) {
                        cout << "NO";
                        return 0;
                    }
                    else {
                        i = j;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
