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
#define loop(i, a, n) for (long long i = a; i <= n; i++)
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
using namespace std;
// #define m 1e9+7

bool func(ll num)
{
    bool result = false;
    for (ll k = 2; k <= 1000 && k < num; k++)
    {
        long long cnt = k, until_sum = k;
        loop(i, 2, 20)
        {
            cnt *= k;
            until_sum += cnt;
            if (until_sum + 1 > num)
                break;
            if (until_sum + 1 == num)
            {
                result = true;
                break;
            }
        }
        if (result)
            break;
    }
    return result;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long num;
        cin >> num;
        if (func(num))
            py;
        else
            pn;
    }
    return 0;
}
