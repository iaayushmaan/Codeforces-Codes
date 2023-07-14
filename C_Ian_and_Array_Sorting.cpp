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

bool func(vector<ll> a, ll n)
{
    bool flag = true;
    for (int i = n - 1; i > 0; i -= 2)
    {
        if (a[i] < a[i - 1])
        {

            if (i - 1 == 0)
                flag = false;
            else
                a[i - 2] -= (a[i - 1] - a[i]);
        }
        else
        {
            if (i - 2 >= 0)
                a[i - 2] += (a[i] - a[i - 1]);
        }
    }
    return flag;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        if (func(a, n))
            py;
        else
            pn;
    }

    return 0;
}