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

string func(int n, int d, string s)
{
    string res = "";
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (s[i] - '0' >= d || flag == true)
        {
            res += s[i];
        }
        else
        {
            res += to_string(d);
            res += s[i];
            flag = true;
        }
    }
    if (flag == false)
        res += to_string(d);
    return res;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        string s;
        cin >> s;
        cout << func(n, d, s) << endl;
    }
    return 0;
}