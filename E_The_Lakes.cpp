#include <map>
#include <set>
#include <stack>
#include <vector>
#include <math.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <climits>
#include <unordered_set>
#include <unordered_map>
#define ll long long
#define loop(o, n) for (int i = 0; i < n; i++)
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
using namespace std;
// #define m 1e9+7

int dx[4] = {0, 0, -1, +1};
int dy[4] = {-1, +1, 0, 0};
int func(vector<vector<int>> &a, int i, int j, vector<vector<int>> &vis)
{
    vis[i][j] = 1;
    int ret = a[i][j];
    for (int k = 0; k < 4; k++)
    {
        int nr = i + dx[k];
        int nc = j + dy[k];
        if (nr >= 0 && nc >= 0 && nr < a.size() && nc < a[0].size() && !vis[nr][nc] && a[nr][nc] != 0)
        {
            ret += func(a, nr, nc, vis);
        }
    }
    return ret;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m, 0));
        vector<vector<int>> vis(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        int ans = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] == 0)
                {
                    vis[i][j] = 1;
                }
                if (a[i][j] != 0 && !vis[i][j])
                {
                    ans = max(ans, func(a, i, j, vis));
                }
            }
        }
        if (ans == INT_MIN)
            cout << 0 << endl;
        else
            cout << ans << endl;
    }
    return 0;
}