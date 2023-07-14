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
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        for (auto &i : v)
            cin >> i;
        sort(v.begin(), v.end());

        double sum, avg;
        sum = avg = 0.0;
        int ans = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            sum += v[i];
            avg = sum / (double(n - i));

            if (avg >= x)
                ++ans;
            else
                break;
        }
        cout << ans << endl;
    }
    return 0;
}