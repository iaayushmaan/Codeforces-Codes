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

ll func(ll n, ll m, vector<ll> a, vector<ll> b)
{
    ll i = 0, j = 0;
    ll res = 0;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    while (i < n || j < m)
    {
        if (a[i] == b[j] || abs(a[i] - b[j]) == 1)
        {
            res++;
            i++;
            j++;
        }
        else if (a[i] > b[j])
            j++;
        else
            i++;
    }
    return res;
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (auto &i : a)
            cin >> i;
        ll m;
        cin >> m;
        vector<ll> b(m);
        for (auto &i : b)
            cin >> i;
        cout << func(n, m, a, b) << endl;
    }
    return 0;
}