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

void gridReconstruction(vector<vector<ll>> &res, ll n)
{
    res[0][0] = 2 * n;
    res[1][n - 1] = (2 * n) - 1;
    ll a = 1, b = (2 * n) - 2;
    for (int i = 0; i < n - 1; i++)
    {
        if (i % 2 == 0)
        {
            res[1][i] = b - 1;
            res[0][i + 1] = b;
            b -= 2;
        }
        else
        {
            res[1][i] = a;
            res[0][i + 1] = a + 1;
            a += 2;
        }
    }
}

void output(vector<vector<ll>> res, ll n)
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<vector<ll>> res(2, vector<ll>(n));
        gridReconstruction(res, n);
        output(res, n);
    }
    return 0;
}