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
    cout << A << endl;
    for (int i = 0; i < m - n; i++) {
        string tmp = B.substr(i, n);
        sort(tmp.begin(), tmp.end());
        cout << tmp << endl;
        if (tmp == A) {
            cout << "YES";
            return 0;
        }
    }

    return 0;
}
