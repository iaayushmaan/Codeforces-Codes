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

double func(double a, double b)
{
    for (int i = 0;; i++)
    {
        if (pow(a, i) >= b)
            return i;
    }
    return -1;
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {

        double a, b;
        cin >> a >> b;
        cout << func(a, b) << endl;
    }
    return 0;
}