#include <map>
#include <set>
#include <stack>
#include <vector>
#include <math.h>
#include <string.h>
#include <climits>
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
        for (auto &I : a)
            cin >> I;
        bool flag = true;
        for (int i = 1; i < n; i++)
        {
            if (a[i] % 2 != a[i - 1] % 2)
            {
                flag = false;
                break;
            }
            else
                continue;
        }
        ll eve = INT_MIN, odd = INT_MAX;
        if (flag)
            py;
        else
        {
            for (int i = 0; i < n; i++)
            {
                odd = min(odd, a[i]);
            }
            if (odd % 2 == 1)
                py;
            else
                pn;
        }
    }
    return 0;
}