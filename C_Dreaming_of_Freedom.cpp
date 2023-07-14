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

bool func(ll n, ll m)
{
    if (n == 1 || m == 1)
        return true;
    if (m >= n && n != 1)
        return false;
    if (n % 2 == 0)
    {
        if (m >= 2)
            return false;
        else
            return true;
    }

    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
        {
            if (m >= i)
                return false;
            else
                return true;
        }
    }
    return true;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        if (func(n, m))
            py;
        else
            pn;
    }
    return 0;
}