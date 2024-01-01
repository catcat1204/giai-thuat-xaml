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
    for (int i = 0; i < m - n; i++) {
        string tmp = B.substr(i, n);
        
    }

    return 0;
}
