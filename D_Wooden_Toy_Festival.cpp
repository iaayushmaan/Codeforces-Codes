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
#define k 3

int calculate(vector<int> a, int n, int m, int c)
{
    int ans = 1;
    int pos = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] - pos >= c)
        {
            ans++;
            pos = a[i];
        }
    }
    return (ans >= m);
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;
        if (k > n)
            return -1;
        sort(a.begin(), a.end());
        int l = 1, h = a[n - 1] - a[0];
        while (l <= h)
        {
            int mid = (l + h) >> 1;

            if (calculate(a, n, k, mid))
                l = mid + 1;
            else
                h = mid - 1;
        }
        cout << l - 1 << endl;
        
    }
    return 0;
}