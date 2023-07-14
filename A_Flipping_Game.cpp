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

ll func(vector<ll> a, ll i, ll j, ll n)
{
    if (i == n || j >= n)
    {
        ll ones = 0, nottake = 0;
        for (int k = i; k < j; k++)
        {
            if (a[k] == 0)
                ones++;
        }
        return ones;
    }
    ll ones = 0, nottake = 0;
    for (int k = i; k <= j; k++)
    {
        if (a[k] == 0)
            ones++;
    }
    return max(ones, max(func(a, i, j + 1, n), func(a, i + 1, j + 1, n)));
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {

        int N;
        cin >> N;
        int A[110];
        for (int i = 0; i < N; ++i)
            cin >> A[i];

        int i, j, k;
        int curr = 0, c;

        for (i = 0; i < N; ++i)
        {
            for (j = i; j < N; ++j)
            {
                c = 0;
                for (k = 0; k < N; k++)
                {
                    if (k >= i && k <= j)
                    {
                        if (A[k] == 0)
                            c++;
                    }
                    else if (A[k] == 1)
                        c++;
                }
                if (c >= curr)
                    curr = c;
            }
        }

        cout << curr << endl;
    }
    return 0;
}