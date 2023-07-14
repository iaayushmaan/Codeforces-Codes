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
        string s;
        cin >> s;
        vector<int> pos;
        pos.push_back(0);
        for (int i = 0; i < int(s.size()); ++i)
        {
            if (s[i] == 'R')
                pos.push_back(i + 1);
        }
        pos.push_back(s.size() + 1);
        int ans = 0;
        for (int i = 0; i < int(pos.size()) - 1; ++i)
        {
            ans = max(ans, pos[i + 1] - pos[i]);
        }
        cout << ans << endl;
    }
    return 0;
}