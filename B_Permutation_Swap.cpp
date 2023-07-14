#include <map>
#include <set>
#include <stack>
#include <vector>
#include <math.h>
#include <string.h>
#include <climits>
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
        ll a[100002];
        map<ll, ll> mp, m2, m3, m4;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]] = i + 1;
        }
        ll cnt = 0, res = 0;
        for (int i = 0; i < n; i++)
        {
            m2[abs(mp[i + 1] - (i + 1))]++;
        }
        ll gcd;
        for (auto i : m2)
        {
            gcd = i.first;
            break;
        }
        for (auto i : m2)
        {
            gcd = __gcd(gcd, i.first);
        }
        cout << gcd << endl;
    }
    return 0;
}