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

bool func(int n, int m)
{
    if (n == m)
        return true;
    if (n < m || n % 3 != 0)
        return false;

    return func(n / 3, m) || func(n - n / 3, m);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if (func(n, m))
            py;
        else
            pn;
    }
    return 0;
}
