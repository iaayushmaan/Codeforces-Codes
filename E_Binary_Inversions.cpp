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

void solve()
{
    ll n, c3 = 0;
    cin >> n;

    vector<ll> a(n);
    for (auto &i : a)
        cin >> i;

    vector<ll> zero(n);
    zero[n - 1] = !(a[n - 1]);

    for (ll i = n - 2; i >= 0; i--)
    {
        if (a[i] == 0)
            zero[i] = zero[i + 1] + 1;
        else
            zero[i] = zero[i + 1];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
            c3 += zero[i];
    }

    ll zero_index = -1;
    ll one_index = -1;

    for (ll i = 0; i < n; i++)
        if (a[i] == 0)
        {
            zero_index = i;
            break;
        }

    for (ll i = n - 1; i >= 0; i--)
        if (a[i] == 1)
        {
            one_index = i;
            break;
        }

    if (zero_index == -1 || one_index == -1)
    {
        cout << n - 1 << endl;
        return;
    }

    a[zero_index] = 1;
    for (ll i = zero_index; i >= 0; i--)
    {
        zero[i]--;
    }
    ll c1 = 0, c2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            c1 += zero[i];
        }
    }

    a[zero_index] = 0;
    for (ll i = zero_index; i >= 0; i--)
    {
        zero[i]++;
    }
    for (ll i = one_index; i >= 0; i--)
        zero[i]++;

    a[one_index] = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            c2 += zero[i];
        }
    }
    cout << max({c1, c2, c3}) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}