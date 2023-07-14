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
#define loop(o, n) for (int i = 0; i < n; i++)
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
using namespace std;
// #define m 1e9+7

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        vector<ll> a(n);
        for (auto &i : a)
            cin >> i;
        ll ans = 0;
        ll i = 0;

        while (i <= n)
        {
            ll mn = a[i];
            ll sm = a[i];
            ll j = i + 1;

            while (j <= n && s[j] == '1')
            {
                mn = min(mn, a[j]);
                sm += a[j];
                j++;
            }

            ans += sm - mn;
            i = j;
        }

        cout << ans << endl;
    }
    return 0;
}