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

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (auto &i : a)
            cin >> i;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[a[i]]++;
        }
        int cnt = 0;
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++)
        {
            while (mp[a[i]] > 0)
            {
                cnt++;
                mp[a[i]]--;
                while (mp[++a[i]] > 0)
                    mp[a[i]]--;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}