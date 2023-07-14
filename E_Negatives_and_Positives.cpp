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
#define loop(o, n) for (int i = o; i < n; i++)
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
using namespace std;
// #define m 1e9+7

// int func(vector<ll> a, int idx)
// {
//     if (idx == 0)
//         return a[idx];
//     int res = INT_MIN, left = INT_MIN, right = INT_MIN;
//     if (idx > 1)
//     {
//         left = func(a, idx - 1) + func(a, idx - 2) + a[idx] + a[idx - 1];
//         right = func(a, idx - 1) + func(a, idx - 2) + (-a[idx]) + (-a[idx - 1]);
//     }
//     res = max(left, right);
//     return res;
// }

class Solution
{
public:
  vector<vector<int>> threeSum(vector<int> &a)
  {
    if (a.size() < 3)
      return {};

    vector<vector<int>> ans;

    sort(begin(a), end(a));

    for (int i = 0; i + 2 < a.size(); ++i)
    {
      if (i > 0 && a[i] == a[i - 1])
        continue;
      int l = i + 1;
      int r = a.size() - 1;
      while (l < r)
      {
        const int sum = a[i] + a[l] + a[r];
        if (sum == 0)
        {
          ans.push_back({a[i], a[l++], a[r--]});
          while (l < r && a[l] == a[l - 1])
            ++l;
          while (l < r && a[r] == a[r + 1])
            --r;
        }
        else if (sum < 0)
        {
          ++l;
        }
        else
        {
          --r;
        }
      }
    }

    return ans;
  }
};

int main()
{
  int t = 1;
  cin >> t;
  while (t--)
  {
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll res = 0;
    ll cnt = 0;
    for (int i = 0; i < n; ++i)
    {
      cin >> a[i];
      if (a[i] < 0)
      {
        ++cnt;
        a[i] = -a[i];
      }
      res += a[i];
    }
    sort(a.begin(), a.end());
    if (cnt & 1)
      res -= 2 * a[0];
    cout << res << endl;
  }
  return 0;
}