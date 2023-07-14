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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        unordered_map<char, int> mp;
        for (int i = 0; i < n; i++)
            mp[s[i]]++;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z' && mp.find(s[i]) != mp.end())
            {
                if (mp.find(toupper(s[i])) != mp.end())
                {
                    ans++;
                    mp[toupper(s[i])]--;
                    mp[s[i]]--;
                    if (mp[toupper(s[i])] == 0)
                        mp.erase(toupper(s[i]));
                    if (mp[s[i]] == 0)
                        mp.erase(s[i]);
                }
                else if (mp.find(s[i]) != mp.end() && k > 0 && mp[s[i]] >= 2)
                {
                    ans++;
                    mp[s[i]] -= 2;
                    if (mp[s[i]] == 0)
                        mp.erase(s[i]);
                    k--;
                }
            }
            else if (s[i] >= 'A' && s[i] <= 'Z' && mp.find(s[i]) != mp.end())
            {
                if (mp.find(tolower(s[i])) != mp.end())
                {
                    mp[tolower(s[i])]--;
                    mp[s[i]]--;
                    if (mp[tolower(s[i])] == 0)
                        mp.erase(tolower(s[i]));

                    if (mp[s[i]] == 0)
                        mp.erase(s[i]);
                    ans++;
                }
                else if (mp.find(s[i]) != mp.end() && k > 0 && mp[s[i]] >= 2)
                {
                    ans++;
                    mp[s[i]] -= 2;
                    if (mp[s[i]] == 0)
                        mp.erase(s[i]);
                    k--;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}