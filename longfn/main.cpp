#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("LONGFN.INP", "r", stdin);
    freopen("LONGFN.OUT", "w", stdout);
    ll n;
    cin >> n;
    ll s;
    if (n&1)
    {
        s=(-1)*((n+1)/2);
    }
    else s = ((n+1)/2);
    cout << s;
    return 0;
}

