#include <map>
#include <set>
#include <queue>
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
    // cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> i;
        }
        vector<int> vis(n + 1, 0);
        queue<int> q;
        q.push(1);
        int cul = -1;
        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            if (!vis[node])
            {
                vis[node] = 1;
                q.push(a[node]);
            }
            else
            {
                cul = node;
            }
        }
        cout << cul << endl;
    }
    return 0;
}