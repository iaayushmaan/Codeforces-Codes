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

int fact(int n)
{
    return (n == 1 || n == 0) ? 1 : n * fact(n - 1);
}

int countSubarrays(const vector<int> arr, int k, int n)
{
    int count = 0;
    int currentSize = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] <= k)
        {
            currentSize++;
            if (currentSize >= n)
            {
                count++;
            }
        }
        else
        {
            currentSize = 0;
        }
    }

    return count;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, k, q;
        cin >> n >> k >> q;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        ll ans = 0;
        ll len = 0;
        for (int i = 0; i < n; ++i)
        {
            if (a[i] <= q)
            {
                len += 1;
            }
            else
            {
                if (len >= k)
                {
                    ans += (len - k + 1) * (len - k + 2) / 2;
                }
                len = 0;
            }
        }

        if (len >= k)
        {
            ans = ans + (len - k + 1) * (len - k + 2) / 2;
        }

        cout << ans << endl;
    }
    return 0;
}