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
    // cin >> t;
    while (t--)
    {
        ll s, n;
        cin >> s >> n;
        vector<pair<ll, ll>> a;
        while (n--)
        {
            ll a1, a2;
            cin >> a1 >> a2;
            pair<ll, ll> tmp;
            tmp.first = a1;
            tmp.second = a2;
            a.push_back(tmp);
        }
        bool flag = true;

        sort(a.begin(), a.end());
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i].first <= s)
                s += a[i].second;
            else
            {
                flag = false;
                break;
            }
        }
        if (flag)
            py;
        else
            pn;
    }
    return 0;
}