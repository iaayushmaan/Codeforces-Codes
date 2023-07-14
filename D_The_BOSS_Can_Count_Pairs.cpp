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
// vector<vector<ll>> v;
// void func(vector<ll> a, vector<ll> b, ll i, ll j, ll n, vector<ll> &temp){
//     if(i == n){
//         if(temp.size() == 2)
//             v.push_back(temp);
//             return;
//     }
//         if(temp.size() == 2)
//             v.push_back(temp);

// }
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n), b(n);
        for (auto &i : a)
            cin >> i;
        for (auto &i : b)
            cin >> i;

        unordered_map<int, int> frequency;
        int pairCount = 0;

        // Count the frequency of differences a[i] - b[i]
        for (int i = 0; i < n; i++)
        {
            frequency[a[i] - b[i]]++;
        }

        // Check pairs satisfying the condition
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int left = a[i] * a[j];
                int right = b[i] + b[j];
                if (left == right)
                {
                    pairCount += frequency[right - left];
                }
            }
        }

        cout << pairCount << endl;
    }
    return 0;
}