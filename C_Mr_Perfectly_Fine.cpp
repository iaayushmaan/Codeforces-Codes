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
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ans01 = INT_MAX, ans10 = INT_MAX, ans11 = INT_MAX;
        while (n--)
        {
            ll m;
            cin >> m;
            string s;
            cin >> s;
            if (s == "10")
            {
                ans10 = min(ans10, m);
            }
            else if (s == "01")
                ans01 = min(ans01, m);
            else if (s == "11")
                ans11 = min(ans11, m);
            else
                continue;
        }
        if ((ans01 == INT_MAX || ans10 == INT_MAX) && ans11 == INT_MAX)
            cout << -1 << endl;
        else if ((ans01 + ans10) < ans11)
            cout << ans01 + ans10 << endl;
        else
            cout << ans11 << endl;
    }
    return 0;
}