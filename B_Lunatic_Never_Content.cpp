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
        vector<ll> a(n);
        for (auto &i : a)
            cin >> i;
        ll tmp = 0, ans = abs(a[0] - a[n - 1]);
        for (int i = 1; i < n / 2; i++)
        {
            tmp = abs(a[i] - a[n - i - 1]);
            if (tmp == 0)
                continue;
            ans = __gcd(ans, tmp);
        }
        cout << ans << endl;
    }
    return 0;
}