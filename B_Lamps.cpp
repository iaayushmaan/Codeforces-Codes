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
        int n;
        cin >> n;
        map<int, vector<int>> m;
        for (ll i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            m[x].push_back(y);
        }
        int ans = 0;
        for (auto x : m)
        {
            sort((x.second).begin(), x.second.end(), greater<int>());
            // cout << x.second.size() << " " << x.first << endl;
            int le = 0;
            if (x.second.size() > x.first)
            {
                le = x.first;
            }
            else
            {
                le = x.second.size();
            }
            for (ll i = 0; i < le; i++)
            {
                ans += x.second[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}