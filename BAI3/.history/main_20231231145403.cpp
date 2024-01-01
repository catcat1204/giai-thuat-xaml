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

    Count countA, countB;
    for (int i = 0; i < n; i++) {
        countA.add(A[i]);
        countB.add(B[i]);
    }

    int ans = 0;
    if (countA == countB) ans++;

    for (int i = n; i < m; i++) {
        countB.add(B[i]);
        countB.remove(B[i - n]);
        if (countA == countB) ans++;
    }

    cout << ans;

    return 0;
}
