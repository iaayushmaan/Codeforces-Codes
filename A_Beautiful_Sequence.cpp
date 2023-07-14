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

bool func(vector<ll> a, int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i >= a[i - 1])
            return true;
    }
    return false;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (auto &i : a)
            cin >> i;
        if (func(a, n))
            py;
        else
            pn;
    }
    return 0;
}