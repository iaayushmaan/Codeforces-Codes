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
        vector<vector<char>> a(3, vector<char>(3, '.'));
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
                cin >> a[i][j];
        }
        char ans = 'h';
        if ((a[0][0] == a[0][1] && a[0][1] == a[0][2]) || (a[0][0] == a[1][1] && a[1][1] == a[2][2]) || (a[0][0] == a[1][0] && a[1][0] == a[2][0]))
            ans = a[0][0];
        else if (a[0][1] == a[1][1] && a[1][1] == a[2][1])
            ans = a[1][1];
        else if ((a[2][0] == a[2][1] && a[2][1] == a[2][2]) || (a[2][0] == a[1][1] && a[1][1] == a[0][2]))
            ans = a[2][0];
        else if (a[1][0] == a[1][1] && a[1][1] == a[1][2])
            ans = a[1][1];
        else if (a[2][0] == a[2][1] && a[2][1] == a[2][2])
            ans = a[2][1];
        else if (a[0][2] == a[1][2] && a[1][2] == a[2][2])
            ans = a[0][2];
        if (ans == 'h' || ans == '.')
            cout << "DRAW" << endl;
        else
            cout << ans << endl;
    }
    return 0;
}