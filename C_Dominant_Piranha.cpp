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

int func(vector<int> a, int n)
{
    int maxi = *max_element(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        if (i > 0)
        {
            if (a[i] == maxi && a[i] > a[i - 1])
                return i + 1;
        }
        if (i < n - 1)
        {
            if (a[i] == maxi && a[i] > a[i + 1])
                return i + 1;
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
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;
        cout << func(a, n) << endl;
    }
    return 0;
}