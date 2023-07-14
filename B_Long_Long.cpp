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
        ll sum = 0, res = 0;
        ll l = 0, r = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= 0)
            {
                if (a[i] < 0)
                    r = 1;
            }
            else
            {
                if (r == 1)
                {
                    res++;
                }
                r = 0;
            }
            sum += abs(a[i]);
        }
        if (r == 1)
            res++;
        cout << sum << " " << res << endl;
    }
    return 0;
}