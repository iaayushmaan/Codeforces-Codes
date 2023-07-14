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
        int n;
        cin >> n;
        string str;
        cin >> str;
        string res = "";

        for (int i = 0; i < n;)
        {
            int j = i + 1;
            while (str[i] != str[j])
            {
                j += 1;
            }
            res += str[i];
            i = j + 1;
        }
        cout << res << endl;
    }
    return 0;
}