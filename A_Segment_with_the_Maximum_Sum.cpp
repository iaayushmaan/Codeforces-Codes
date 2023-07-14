#include <map>
#include <bits/stdc++.h>
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

struct group
{
    ll pref, suff, sum, ans;
};

const int N = 100002;
vector<ll> a;
group tree[4 * N];

void build(ll node, ll st, ll en)
{
    if (st == en)
    {
        if (a[st] <= 0)
        {
            tree[node].sum = a[st];
            tree[node].pref = 0;
            tree[node].suff = 0;
            tree[node].ans = 0;
        }
        else
        {
            tree[node].pref = a[st];
            tree[node].suff = a[st];
            tree[node].ans = a[st];
            tree[node].sum = a[st];
        }
        return;
    }
    ll mid = (st + en) / 2;
    build(2 * node, st, mid);
    build(2 * node + 1, mid + 1, en);
    tree[node].sum = tree[2 * node].sum + tree[2 * node + 1].sum;
    tree[node].pref = max(tree[2 * node].pref, tree[2 * node].sum + tree[2 * node + 1].pref);
    tree[node].suff = max(tree[2 * node + 1].suff, tree[2 * node + 1].sum + tree[2 * node].suff);
    tree[node].ans = max(tree[2 * node].suff + tree[2 * node + 1].pref, max(tree[2 * node].ans, tree[2 * node + 1].ans));
}

void update(ll node, ll st, ll en, ll idx, ll val)
{
    if (st == en)
    {
        a[st] = val;
        if (a[st] <= 0)
        {
            tree[node].sum = a[st];
            tree[node].pref = tree[node].suff = tree[node].ans = 0;
        }
        else
        {
            tree[node].pref = tree[node].suff = tree[node].ans = tree[node].sum = a[st];
        }
        return;
    }
    ll mid = (st + en) / 2;
    if (idx <= mid)
    {
        update(2 * node, st, mid, idx, val);
    }
    else
    {
        update(2 * node + 1, mid + 1, en, idx, val);
    }
    tree[node].sum = tree[2 * node].sum + tree[2 * node + 1].sum;
    tree[node].pref = max(tree[2 * node].pref, tree[2 * node].sum + tree[2 * node + 1].pref);
    tree[node].suff = max(tree[2 * node + 1].suff, tree[2 * node + 1].sum + tree[2 * node].suff);
    tree[node].ans = max(tree[2 * node].suff + tree[2 * node + 1].pref, max(tree[2 * node].ans, tree[2 * node + 1].ans));
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
        for (auto &it : a)
            cin >> it;

        build(1, 0, n - 1);
        cout << tree[1].ans << endl;
        while (m--)
        {
            ll idx, val;
            cin >> idx >> val;
            update(1, 0, n - 1, idx, val);
            cout << tree[1].ans << endl;
        }
    }
    return 0;
}