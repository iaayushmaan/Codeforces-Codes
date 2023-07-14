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
#define m 1000000007

ll func(vector<ll> a, vector<ll> b, ll n)
{
    ll k = 0, res = 1;
    for (int i = 0; i < n; i++)
    {
        while (k < n && a[i] <= b[k])
            k++;
        res = (res * (i - k + 1LL)) % m;
    }
    return res;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        cout << func(a, b, n) << endl;
    }

    return 0;
}