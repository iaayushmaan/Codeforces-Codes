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
// #define m 1e9+7
vector<ll> a;
vector<pair<ll, ll>> tree;

void build(ll node, ll st, ll en)
{
    if (st == en)
    {
        tree[node].first = a[st];
        tree[node].second = 1;
        return;
    }
    int mid = (st + en) >> 1;
    build(2 * node, st, mid);
    build(2 * node + 1, mid + 1, en);
    if (tree[2 * node].first < tree[2 * node + 1].first)
    {
        tree[node].first = tree[2 * node].first;
        tree[node].second = tree[2 * node].second;
    }
    else if (tree[2 * node].first > tree[2 * node + 1].first)
    {
        tree[node].first = tree[2 * node + 1].first;
        tree[node].second = tree[2 * node + 1].second;
    }
    else
    {
        tree[node].first = tree[2 * node + 1].first;
        tree[node].second = tree[2 * node + 1].second + tree[2 * node].second;
    }
}

pair<ll, ll> query(ll node, ll st, ll en, ll l, ll r)
{
    if (l > en || r < st)
        return {INT_MAX, -1};
    if (l <= st && r >= en)
        return tree[node];

    int mid = (st + en) >> 1;
    pair<ll, ll> q1 = query(2 * node, st, mid, l, r);
    pair<ll, ll> q2 = query(2 * node + 1, mid + 1, en, l, r);
    if (q1.first < q2.first)
        return q1;
    if (q2.first < q1.first)
        return q2;
    else
        return {q1.first, q1.second + q2.second};
}

void update(ll node, ll st, ll en, ll idx, ll v)
{
    if (st == en)
    {
        tree[node].first = v;
        tree[node].second = 1;
        return;
    }
    int mid = (st + en) >> 1;
    if (idx <= mid)
    {
        update(2 * node, st, mid, idx, v);
    }
    else
    {
        update(2 * node + 1, mid + 1, en, idx, v);
    }
    if (tree[2 * node].first < tree[2 * node + 1].first)
    {
        tree[node].first = tree[2 * node].first;
        tree[node].second = tree[2 * node].second;
    }
    else if (tree[2 * node].first > tree[2 * node + 1].first)
    {
        tree[node].first = tree[2 * node + 1].first;
        tree[node].second = tree[2 * node + 1].second;
    }
    else
    {
        tree[node].first = tree[2 * node + 1].first;
        tree[node].second = tree[2 * node + 1].second + tree[2 * node].second;
    }
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n, m;
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
                pair<ll, ll> ans = query(1, 0, n - 1, l, r - 1);
                cout << ans.first << " " << ans.second << endl;
            }
        }
    }
    return 0;
}