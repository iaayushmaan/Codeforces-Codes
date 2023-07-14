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
        ll n;
        vector<ll> ans;
        cin >> n;
        ll count = 1;
        if (n % 2 == 0)
        {
            cout << -1 << endl;
        }
        else
        {

            while (n > 3)
            {
                n /= 2;
                count++;
                if (n % 2 == 0)
                    ans.push_back(1);
                else
                    ans.push_back(2);
            }
            ans.push_back(2);
            reverse(ans.begin(), ans.end());
            cout << ans.size() << endl;
            for (auto x : ans)
                cout << x << " ";
            cout << endl;
        }
    }
    return 0;
}