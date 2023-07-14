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

int getMaxLength(string s, int n)
{
    int start = 0;
    int preCnt = 0;
    while (start < n && s[start] == '1')
    {
        preCnt++;
        start++;
    }
    int end = n - 1;
    int suffCnt = 0;
    while (end >= 0 && s[end] == '1')
    {
        suffCnt++;
        end--;
    }
    if (start > end)
        return n;
    int midCnt = 0;
    int result = 0;
    for (int i = start; i <= end; i++)
    {
        if (s[i] == '1')
        {
            midCnt++;
            result = max(result, midCnt);
        }
        else
        {
            midCnt = 0;
        }
    }
    return max(result, preCnt + suffCnt);
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        string s1;
        cin >> s1;
        string s = s1 + s1;
        ll n = s.length();
        long long int co = 0, cnt = 0;
        for (int i = 0; i <= n; i++)
        {
            if (s[i] == '1')
            {
                co++;
            }
            else
            {
                cnt = max(cnt, co);
                co = 0;
            }
        }
        if (cnt >= s1.size())
        {
            cout << (long long int)s1.size() * s1.size() << endl;
        }
        else
        {
            cout << ((cnt + 1) / 2) * (cnt - (cnt + 1) / 2 + 1) << endl;
        }
    }
    return 0;
}