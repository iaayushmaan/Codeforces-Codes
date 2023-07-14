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

int func(int n, int a[])
{
    int res = 0, cnt = 0;
    for (int i = 0; i <= n; i++)
    {
        res = 0, cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j] > i)
                cnt++;
            else
                res++;
        }
        if (i == cnt)
        {
            return cnt;
        }
    }
    return -1;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[10001];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        cout << func(n, a) << endl;
    }
    return 0;
}