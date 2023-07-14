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
ll c[2] = {0};

void dfs(vector<ll> adj[], ll node, vector<ll> &vis, int color)
{
    vis[node] = 1;
    c[color]++;
    for (auto it : adj[node])
    {
        if (!vis[it])
            dfs(adj, it, vis, !color);
    }
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> adj[n + 1];
        ll q = n - 1;
        while (q--)
        {
            ll u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<ll> vis(n + 1, 0);
        dfs(adj, 1, vis, 0);
        cout << (long long)c[0] * c[1] - (n - 1) << endl;
    }
    return 0;
}