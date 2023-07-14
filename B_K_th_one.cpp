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

ll query(ll node, ll st, ll en, ll k)
{
    if (st == en)
        return st;
    ll mid = (st + en) >> 1;
    if (k < tree[2 * node])
        return query(2 * node, st, mid, k);
    else
        return query(2 * node + 1, mid + 1, en, k - tree[2 * node]);
}

void update(ll node, ll st, ll en, ll idx)
{
    if (st == en)
    {
        if (a[st] == 0)
        {
            a[st] = 1;
            tree[node] = 1;
        }
        else
        {
            a[st] = 0;
            tree[node] = 0;
        }
        return;
    }
    ll mid = (st + en) >> 1;
    if (idx <= mid)
    {
        update(2 * node, st, mid, idx);
    }
    else
    {
        update(2 * node + 1, mid + 1, en, idx);
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
                ll idx;
                cin >> idx;
                update(1, 0, n - 1, idx);
            }
            else
            {
                ll k;
                cin >> k;
                cout << query(1, 0, n - 1, k) << endl;
            }
        }
    }
    return 0;
}