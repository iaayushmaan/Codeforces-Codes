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

ll func(ll n, ll k, ll g)
{
    ll ans = 0;
    if (k * g - (((g + 1) / 2) - 1) * n < 0)
        return k * g;

    return k * g - (((k * g - (((g + 1) / 2) - 1) * n + g - 1) / g) * g);
}

int main()

{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int tmp = 1, sum = 0;
        for (int i = 0; i < n; i++)
        {
            tmp = tmp * v[i];
            sum += v[i];
        }
        if (sum < 0)
        {
            sum = -sum;
            int r = (abs(sum) / 2) + sum % 2;
            if (r % 2 == 1)
                tmp = -tmp;
            if (tmp == -1)
                cout << r + 1 << endl;
            else
                cout << r << endl;
        }
        else
        {
            if (tmp == -1)
                cout << 1 << endl;
            else
                cout << "0" << endl;
        }
    }

    return 0;
}