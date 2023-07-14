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

void func(ll n, vector<ll> v1, vector<ll> v2)
{
    v2[0] = v1[0];
    for (int i = 0; i < n - 1; i++)
        v2[i + 1] = min(v1[i], v1[i + 1]);

    v2[n] = v1[n - 1];

    for (auto i : v2)
        cout << i << " ";
    cout << endl;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        n--;
        vector<ll> v1(n);
        vector<ll> v2(n + 1);
        for (auto &i : v1)
            cin >> i;
        func(n, v1, v2);
    }
    return 0;
}
