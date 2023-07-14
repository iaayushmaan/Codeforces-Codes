#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    int a[100000];
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        long mi = INT_MAX, ma = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            mi = min(mi, (long)a[i]);
            ma = max(ma, (long)a[i]);
        }
        long ans1 = min(mi * mi, min(ma * mi, ma * ma));
        long ans2 = max(ma * ma, mi * mi);
        cout << ans1 << " " << ans2 << endl;
    }
    return 0;
}