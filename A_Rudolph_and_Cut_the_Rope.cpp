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
        int m;
        cin >> m;
        int ans = 0;
        while (m--)
        {
            int a, b;
            cin >> a >> b;
            if (a > b)
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}