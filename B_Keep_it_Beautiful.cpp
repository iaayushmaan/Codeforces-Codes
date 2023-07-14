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
        int a = 0, r = 0, l = 0, flag = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> a;

            if (i > 0)
            {
                if (flag)
                {
                    if (a >= r)
                    {
                        cout << 1;
                        r = a;
                    }
                    else if (a <= l)
                    {
                        flag = 0;
                        cout << 1;
                        r = a;
                    }
                    else
                    {
                        cout << 0;
                    }
                }
                else
                {
                    if (a >= r && a <= l)
                    {
                        cout << 1;
                        r = a;
                    }
                    else
                    {
                        cout << 0;
                    }
                }
            }
            else
            {

                cout << 1;
                r = a, l = a;
            }
        }
        cout << endl;
    }
    return 0;
}