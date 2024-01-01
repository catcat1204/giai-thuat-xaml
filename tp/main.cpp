#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    freopen("TP.INP", "r", stdin);
    freopen("TP.OUT", "w", stdout);
    ll x, y; cin >> x >> y;
    if (x == y || x == 0 || y == 0) {
        cout << 0;
    } else if (x > 0 && y > 0) {
        if (x > y) {
            cout << 2;
        } else {
            cout << 1;
        }
    } else if (x > 0 && y < 0) {
        if (x > abs(y)) {
            cout << 3;
        } else {
            cout << 4;
        }
    } else if (x < 0 && y < 0) {
        if (abs(x) > abs(y)) {
            cout << 6;
        } else {
            cout << 5;
        }
    } else if (x < 0 && y > 0) {
        if (abs(x) > y) {
            cout << 7;
        } else {
            cout << 8;
        }
    }

    return 0;
}
