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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;
        sort(a.begin(), a.end());
        int c = 0, max = 0;
        if (k == 0)
            max = a[0] - 1;
        else
            max = a[k - 1];
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= max)
                c++;
        }

        if (c != k || max < 1)
            cout << ("-1");
        else
            cout << max << endl;
    }
    return 0;
}