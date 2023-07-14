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

// void rotateMatrix(vector<vector<ll>> a, vector<vector<ll>> b, ll N)
// {
//     int k = 0, l = 0;
//     for (int i = N - 1; i >= 0; i--)
//     {
//         for (int j = N - 1; j >= 0; j--)
//             b[k][l] = a[i][j];
//         k++;
//         l++;
//     }
// }

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll a[1001][1001];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        ll cnt = 0;
        if (n == 1)
        {
            py;
            continue;
        }
        for (int i = 0; i < n / 2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i][j] == a[n - i - 1][n - j - 1])
                    ;
                else
                    cnt++;
            }
        }
        if (n & 1)
        {
            for (int j = 0; j < n / 2; j++)
            {
                if (a[n / 2][j] != a[n / 2][n - 1 - j])
                    cnt++;
            }
        }
        if (cnt > k)
            pn;
        else
        {
            k -= cnt;
            if (k % 2 == 0 || n & 1)
                py;
            else
                pn;
        }
    }

    return 0;
}