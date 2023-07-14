#include <map>
#include <set>
#include <stack>
#include <vector>
#include <math.h>
#include <climits>
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
    // cin >> t;
    while (t--)
    {
        ll n, l;
        cin >> n >> l;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(begin(a), end(a));
        // ll d2 = INT_MIN;
        ll d = max(a[0], l - a[n - 1]) * 2;

        for (int i = 0; i < n - 1; i++)
            d = max(d, a[i + 1] - a[i]);

        // cout << d << d2 << endl;
        cout.precision(20);
        cout << fixed << d / 2.0 << endl;
    }
    return 0;
}
