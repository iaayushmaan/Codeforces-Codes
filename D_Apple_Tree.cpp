#include <map>
#include <set>
#include <stack>
#include <vector>
#include <math.h>
#include <climits>
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
const int s = 8e5 + 6;
ll u, v, n, q;
ll vis[s];
vector<int> a[s];

void dfs(ll i, ll j)
{
    if (a[i].size() == 1 && i != 1)
        vis[i] = 1;
    for (auto v : a[i])
    {
        if (v != j)
            dfs(v, i), vis[i] += vis[v];
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
            a[i].clear(), vis[i] = 0;
        for (int i = 1; i < n; i++)
        {
            cin >> u >> v;
            a[u].push_back(v);
            a[v].push_back(u);
        }
        dfs(1, -1);
        cin >> q;
        while (q--)
        {
            cin >> u >> v;
            cout << vis[u] * vis[v] << endl;
        }
    }
}