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

int func(vector<vector<int>> a, int i, int n, int k)
{
    if (i >= n)
        return 0;
    int take = 0;
    for (int j = i + 1; j < n; j++)
    {
        if (a[i][0] ^ a[j][0] + a[i][1] ^ a[j][1] == k)
            take += 1 + func(a, j + 1, n, k);
    }
    return take;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> a(n, vector<int>(n, 2));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> a[i][j];
            }
        }
        int k;
        cin >> k;
        vector<int> dp(n + 1, 0);
        cout << func(a, 0, n, k) << endl;
    }
    return 0;
}