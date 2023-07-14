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

// int find(string s)
// {
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s[i] != '0')
//             return i;
//     }
//     return -1;
// }

// bool check(string s)
// {
//     int idx = find(s);
//     int n = s.length();
//     if (idx == -1 || idx == n - 1)
//         return false;
//     for (int i = idx; i < n; i++)
//     {
//         if (s[i] == '0')
//             return false;
//     }

//     return true;
// }

bool check(int n)
{

    while (n > 0)
    {
        if (n % 11 == 0 || n % 111 == 0)
        {
            return true;
        }
        n -= 111;
    }
    return false;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (check(n))
            py;
        else
            pn;
    }
    return 0;
}