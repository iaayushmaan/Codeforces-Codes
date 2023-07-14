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

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, m, x1, x2, y1, y2;
        cin >> n >> m;
        cin >> x1 >> y1 >> x2 >> y2;
        if ((x1 == 1 || x1 == n) && (y1 == 1 || y1 == m) || (x2 == 1 || x2 == n) && (y2 == 1 || y2 == m))
            cout << 2 << endl;
        else if (x1 == 1 || x1 == n || y1 == 1 || y1 == m || x2 == 1 || x2 == n || y2 == 1 || y2 == m)
            cout << 3 << endl;
        else
            cout << 4 << endl;
    }
    return 0;
}