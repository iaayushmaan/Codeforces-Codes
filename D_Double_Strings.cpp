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
        vector<string> s(n);
        unordered_map<string, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            mp[s[i]] = 1;
        }
        for (int i = 0; i < n; i++)
        {
            int flag = 0;
            for (int j = 1; j < s[i].length(); j++)
            {
                if (mp[s[i].substr(0, j)] && mp[s[i].substr(j, s[i].length() - j)])
                    flag = 1;
            }
            cout << flag;
        }
        cout << endl;
    }
    return 0;
}