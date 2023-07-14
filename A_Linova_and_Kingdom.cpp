#include <map>
#include <set>
#include <stack>
#include <queue>
#include <vector>
#include <math.h>
#include <string.h>
#include <climits>
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
#define num 200000 + 100
bool vis[num];
vector<int> adj[num];
int dfs(int node, int prev, vector<int> &dist)
{
    vis[node] = 1;
    int next = 0;
    for (auto i : adj[node])
    {
        if (!vis[i])
            next += dfs(i, prev + 1, dist);
    }
    dist.push_back(prev - next);
    return next + 1;
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        // vis.resize(n + 1, 0);

        for (int i = 1; i <= n; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int> dist(n + 1);
        dfs(1, 0, dist);
        // queue<pair<int, int>> q;
        // q.push({0, 1});
        // dist[1] = 0;
        // while (!q.empty())
        // {
        //     int node = q.front().second;
        //     int wt = q.front().first;
        //     q.pop();
        //     for (auto it : adj[node])
        //     {
        //         int adjnode = it;
        //         if (wt + 1 < dist[adjnode])
        //         {
        //             dist[adjnode] = wt + 1;
        //             q.push({wt + 1, adjnode});
        //         }
        //     }
        // }
        ll ans = 0;
        sort(dist.begin(), dist.end(), greater<>());
        for (int i = 0; i < k; i++)
        {
            // cout << dist[i] << " ";
            ans += dist[i];
        }
        cout << ans << endl;
    }
    return 0;
}
