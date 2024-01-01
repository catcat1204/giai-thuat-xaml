#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    freopen("SMARTCOMP.INP", "r", stdin);
    freopen("SMARTCOMP.OUT", "w", stdout);
    int n, v; cin >> n >> v;
    vector<pair<int, int>> z[4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < n; j++) {
            int c1, v1; cin >> c1 >> b;
            z[i].push_back({a, b});
        }
    }
    int vmax = 0;
    for (int a = 0; a < n; a++) {
        for (int b = 0; b < n; b++) {
            for (int c = 0; c < n; c++) {
                for (int d = 0; d < n; d++) {
                    int total_cost = z[0][a].first + z[1][b].first + z[2][c].first + z[3][d].first;
                    if (total_cost <= v) {
                        int dg = z[0][a].second + z[1][b].second + z[2][c].second + z[3][d].second;
                        vmax = max(vmax, dg);
                    }
                }
            }
        }
    }
    cout << vmax;
    return 0;
}