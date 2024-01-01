#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("BAI2.INP", "r", stdin);
    freopen("BAI2.OUT", "w", stdout);
    int n, c;
    cin >> n >> c;
    int a[n], d = 0;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n-1; i++)
    {
        if ( (a[i+1] - a[i]) <= c)
        {
            d++;
        }
        else
        {
            d=1;
        }
        // cout << a[i+1] - a[i] << " " << d << endl;
    }
    cout << d;
    return 0;
}
