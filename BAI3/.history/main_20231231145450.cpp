#include <bits/stdc++.h>
#define ll long long

using namespace std;


int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    freopen("BAI3.INP", "r", stdin);
    freopen("BAI3.OUT", "w", stdout);

    int n, m;
    cin >> n >> m;
    string A, B;
    cin >> A >> B;

    sort(A.begin(), A.end());
    for (int i = 0; i < m; i++) {
        string tmp = B;
        tmp[i] = '0';
        sort(tmp.begin(), tmp.end());
        if (tmp == A) {
            cout << "YES";
            return 0;
        }
    }

    return 0;
}
