#include <map>
#include <set>
#include <stack>
#include <vector>
#include <math.h>
#include <string.h>
#include <climits>
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

int lenOfLongSubarr(vector<int> A, int N, int K)
{

    int i = 0, j = 0, sum = 0;
    int maxLen = INT_MIN;

    while (j < N)
    {
        sum += A[j]; 
        if (sum == K)
        {
            maxLen = max(maxLen, j - i + 1); 
            j++;
        }
        else if (sum < K)
        { 
            j++;
        }
        else if (sum > K)
        { 
            while (sum > K)
            {
                sum -= A[i];
                i++;
            }
            if (sum == K)
            {
                maxLen = max(maxLen, j - i + 1);
            }
            j++;
        }
    }
    return maxLen;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        ll s = 0;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s += a[i];
        }
        if (k > s)
            cout << -1 << endl;
        else if (k == s)
            cout << 0 << endl;
        else
        {
            int len = lenOfLongSubarr(a, n, k);
            cout << n - len << endl;
        }
    }
    return 0;
}