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
            int cost, value; cin >> cost >> value;
            z[i].push_back({cost, value});
        }
    }
    int max_value = 0;
    for (int a = 0; a < n; a++) {
        for (int b = 0; b < n; b++) {
            for (int c = 0; c < n; c++) {
                for (int d = 0; d < n; d++) {
                    int total_cost = z[0][a].first + z[1][b].first + z[2][c].first + parts[3][d].first;
                    if (total_cost <= v) {
                        int total_value = parts[0][a].second + parts[1][b].second + parts[2][c].second + parts[3][d].second;
                        max_value = max(max_value, total_value);
                    }
                }
            }
        }
    }
    cout << max_value;
    return 0;
}