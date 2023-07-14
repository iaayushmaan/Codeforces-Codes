#include <map>
#include <set>
#include <stack>
#include <vector>
#include <math.h>
#include <climits>
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
        ll n, k;
        cin >> n >> k;
        int mini = INT_MAX, maxi = INT_MIN;
        for (int i = 0; i < k - 1; i++)
        {
            long n1 = n;
            while (n1 > 0)
            {
                long d = n1 % 10;
                if (d < mini)
                    mini = d;
                if (d > maxi)
                    maxi = d;
                n1 /= 10;
            }
            n = n + mini * maxi;
            if (mini == 0)
                break;
            mini = INT_MAX;
            maxi = INT_MIN;
        }
        cout << n << endl;
    }
    return 0;
}