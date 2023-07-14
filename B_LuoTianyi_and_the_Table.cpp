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
        int n, m;
        cin >> n >> m;
        int x = n * m;
        vector<ll> a(x);
        for (auto &i : a)
            cin >> i;
        sort(a.begin(), a.end());
        int ans = 0, ans2 = 0;

        ans += (max(m, n) - 1) * min(m, n) * a[x - 1] + (min(m, n) - 1) * a[x - 2] - (x - 1) * a[0];

        ans2 += a[x - 1] * (x - 1) - (max(m, n) - 1) * min(m, n) * a[0] - (min(m, n) - 1) * a[1];
        cout << max(ans, ans2) << endl;
    }
    return 0;
}