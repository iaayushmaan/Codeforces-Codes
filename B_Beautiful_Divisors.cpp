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
    // cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long>v={1,6,28,120,496,2016,8128,32640};
        reverse(v.begin(), v.end());
        for (int i = 0; i < (int)v.size(); i++)
        {
            if (n % v[i] == 0)
            {
                cout << v[i] << "\n";
                return 0;
            }
        }
    }
    return 0;
}