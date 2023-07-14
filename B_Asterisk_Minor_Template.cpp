#include <map>
#include <set>
#include <stack>
#include <vector>
#include <math.h>
#include <string>
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
    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        string a, b;
        getline(cin, a);
        getline(cin, b);

        if (a[0] == b[0])
        {
            cout << "YES" << endl;
            cout << a[0] << "*" << endl;
            continue;
        }
        if (a.back() == b.back())
        {
            cout << "YES" << endl;
            cout << "*" << a.back() << endl;
            continue;
        }
        for (int j = 0; j < b.length() - 1; j++)
        {
            if (a.find(b.substr(j, 2)) != string::npos)
            {
                cout << "YES" << endl;
                cout << "*" << b[j] << b[j + 1] << "*" << endl;
                break;
            }
        }
        if (i == b.length() - 2)
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
