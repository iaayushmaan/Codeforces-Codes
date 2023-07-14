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

ll mostFrequent(vector<ll> a, ll n)
{
    int maxcount = 0;
    int element_having_max_freq;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[j])
                count++;
        }

        if (count > maxcount)
        {
            maxcount = count;
            element_having_max_freq = a[i];
        }
    }

    return maxcount + 1;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n), b(n);
        for (auto &i : a)
            cin >> i;
        for (auto &i : b)
            cin >> i;
        vector<ll> c(2 * n);
        int j = 0, k = 0;
        for (int i = 0; i < 2 * n; i++)
        {
            if (i % 2 == 0)

                c[i] = a[j++];

            else
                c[i] = b[k++];
        }
        j = 1;
        int ans = 1;
        for (int i = 1; i < 2 * n; i++)
        {
            if (c[i] != c[i - 1])
                j = 1;
            else
                j++;
            ans = max(j, ans);
        }
        cout << ans << endl;
    }
    return 0;
}