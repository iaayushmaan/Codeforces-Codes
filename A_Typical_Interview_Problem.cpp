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

#ifdef ADD_TRACE
#include "utils/debug.h"
#define trace(...) cout << "Line:" << __LINE__ << " ", __f(#__VA_ARGS__, __VA_ARGS__)
#else
#define trace(...)
#endif

bool func(int k, string s)
{
    string now = "";
    for (int i = 1; i <= 15; ++i)
    {
        if (i % 3 == 0)
        {
            now += "F";
        }
        if (i % 5 == 0)
        {
            now += "B";
        }
    }

    trace(now);

    now = now + now + now;

    for (int i = 0; i + k < now.length(); ++i)
    {
        if (now.substr(i, k) == s)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        string s;
        cin >> s;
        if (func(k, s))
            py;
        else
            pn;
    }
    return 0;
}
