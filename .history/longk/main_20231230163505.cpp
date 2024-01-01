#include <bits/stdc++.h>
#define ll long long

using namespace std;

llfactorial(int n) {
    long long fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

long long combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

long long permutation(int n, int r) {
    return factorial(n) / factorial(n - r);
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    freopen("LONGK.INP", "r", stdin);
    freopen("LONGK.OUT", "w", stdout);
    int n, d; cin >> n;
    int a[n];
    map<int, int> ts;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        ts[a[i]]++;
    }
    for (int i = 0; i < n; i++) {
        if (ts[a[i]] == 1) {
            cout << a[i];
            return 0;
        }
    }
    return 0;
}
