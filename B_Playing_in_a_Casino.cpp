#include <map>
#include <set>
#include <stack>
#include <vector>
#include <math.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#define ll long long

#define py cout << "YES" << endl
#define pn cout << "NO" << endl
using namespace std;
// #define m 1e9+7

int main()
{
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll a[n][m];
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        vector<vector<ll>> v;
        vector<ll> temp(n);
        for (ll i = 0; i < m; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                temp[j] = a[j][i];
            }
            v.push_back(temp);
        }
        ll ans = 0;
        for (ll i = 0; i < m; i++)
        {
            ll k = n - 1;
            sort(v[i].rbegin(), v[i].rend());
            for (ll j = 0; j < n; j++)
            {
                ans += k * v[i][j];
                k -= 2;
            }
        }

        cout << ans << endl;
        // for (ll i = 0; i < m; i++)
        // {
        //     for (ll j = 0; j < n; j++)
        //         cout << v[i][j] << " ";
        //     cout << endl;
        // }
    }
    return 0;
}
