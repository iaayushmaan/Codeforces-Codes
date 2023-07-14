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
#define all(v) v.begin(), v.end()
using namespace std;
// #define m 1e9+7

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> arr(n), brr(n);
        for (auto &a : arr)
            cin >> a;
        for (auto &a : brr)
            cin >> a;
        vector<ll> tArr = arr;
        sort(all(tArr));
        sort(all(brr));
        map<ll, multiset<ll>> st;
        for (int i = 0; i < n; i++)
            st[tArr[i]].insert(brr[i]);
        for (auto &a : arr)
        {
            // cout << a << " -> ";
            // for(auto &b : st[a])
            //     cout << b << " ";
            // cout << endl;
            cout << *st[a].begin() << " ";
            st[a].erase(st[a].begin());
        }
        cout << endl;
    }
    return 0;
}