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

ll func(ll n, ll a, ll b, ll a1, ll b1)
{
    ll res1 = min(min(a, n - a - 1), min(b, n - b - 1));
    ll res2 = min(min(a1, n - a1 - 1), min(b1, n - b1 - 1));
    return abs(res1 - res2);
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n, a, b, a1, b1;
        cin >> n >> a >> b >> a1 >> b1;
        cout << func(n, a - 1, b - 1, a1 - 1, b1 - 1) << endl;
    }
    return 0;
}