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
vector<ll> a, tree;

void build(ll node, ll st, ll end)
{
    if (st == end)
    {
        tree[node] = a[st];
        return;
    }
    ll mid = (st + end) >> 1;
    build(2 * node, st, mid);
    build(2 * node + 1, mid + 1, end);
    tree[node] = tree[2 * node] + tree[2 * node + 1];
}

ll query(ll node, ll st, ll en, ll l, ll r)
{
    if (l > en || r < st)
        return 0;
    if (l <= st && r >= en)
        return tree[node];
    ll mid = (st + en) >> 1;
    ll q1 = query(2 * node, st, mid, l, r);
    ll q2 = query(2 * node + 1, mid + 1, en, l, r);
    return q1 + q2;
}

void update(ll node, ll st, ll en, ll idx, ll v)
{
    if (st == en)
    {
        a[st] = v;
        tree[node] = v;
        return;
    }
    ll mid = (st + en) >> 1;
    if (idx <= mid)
    {
        update(2 * node, st, mid, idx, v);
    }
    else
    {
        update(2 * node + 1, mid + 1, en, idx, v);
    }
    tree[node] = tree[2 * node] + tree[2 * node + 1];
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        a.resize(n);
        tree.resize(4 * n);
        for (auto &i : a)
            cin >> i;
        build(1, 0, n - 1);
        while (m--)
        {
            int type;
            cin >> type;
            if (type == 1)
            {
                ll idx, v;
                cin >> idx >> v;
                update(1, 0, n - 1, idx, v);
            }
            else
            {
                ll l, r;
                cin >> l >> r;
                cout << query(1, 0, n - 1, l, r - 1) << endl;
            }
        }
    }
    return 0;
}