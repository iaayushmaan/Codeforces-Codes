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
        vector<int> a(n);
        for (auto &it : a)
            cin >> it;
        int res = a[0], cnt = 1;
        for (int i = 0; i < n; i++)
        {
            res &= a[i];
            if (res == 0)
            {
                if (i == n - 1)
                    break;
                cnt++;
                res = a[i + 1];
            }
        }
        if (res != 0)
            cnt--;
        cout << max(cnt, 1) << endl;
    }
    return 0;
}