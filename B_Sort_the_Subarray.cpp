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
        vector<ll> a(n + 1), b(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
            cin >> b[i];

        pair<int, int> p = {0, 0};
        for (int i = 1; i <= n; i++)
        {
            if (a[i] != b[i])
            {
                p.first = i;
                break;
            }
        }
        for (int i = n; i >= 1; i--)
        {
            if (a[i] != b[i])
            {
                p.second = i;
                break;
            }
        }

        // sort(a.begin() + p.first, a.begin() + p.second + 1);
        //  for (auto i : a)
        //      cout << i << " ";
        while (p.first > 1 && b[p.first - 1] <= b[p.first])
            p.first--;
        while (p.second < n && b[p.second] <= b[p.second + 1])
            p.second++;
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}