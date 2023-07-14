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
        bool flag = true;
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] == s[i - 1])
                continue;
            else
                flag = false;
        }
        if (flag == true)
            cout << -1 << endl;
        else
        {
            cout << s.length() - 1 << endl;
        }
    }
    return 0;
}