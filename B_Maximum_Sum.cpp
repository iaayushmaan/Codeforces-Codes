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
        ll n, k;
        cin >> n >> k;
        ll sum = 0, res = 0;
        vector<ll> v(n), a(n + 1), b(n + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            a[i + 1] = a[i] + v[i];
            b[i + 1] = a[i + 1];
        }
        for (int i = 0; i < k + 1; i++)
        {
            res = max(res, a[n - k + i] - a[2 * i]);
            cout << a[n - k + i] << " " << a[2 * i] << endl;
            cout << res << endl;
        }
        // cout << res << endl;
    }
    return 0;
}