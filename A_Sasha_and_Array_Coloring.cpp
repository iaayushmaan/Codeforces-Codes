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
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (auto &i : a)
            cin >> i;
        sort(a.begin(), a.end());
        int i = 0, j = n - 1;
        int ans = 0;
        while (i < j)
        {
            ans += abs(a[i] - a[j]);
            i++;
            j--;
        }
        cout << ans << endl;
    }
    return 0;
}