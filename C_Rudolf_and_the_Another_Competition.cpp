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

bool mycmp(const pair<pair<int, int>, int> &p1, const pair<pair<int, int>, int> &p2)
{
    if (p1.first.first == p2.first.first)
        return p1.first.second < p2.first.second;
    return p1.first.first < p2.first.first;
}

void func(int n, int m, int h, vector<pair<pair<int, int>, int>> &grades)
{
    for (int i = 0; i < n; i++)
    {
        vector<int> marks(m);
        for (int j = 0; j < m; j++)
            cin >> marks[j];
        sort(marks.begin(), marks.end());
        int x = 0, y = 0, sum = 0;
        for (int j = 0; j < m && x + marks[j] <= h; j++)
        {
            x += marks[j];
            y += x;
            sum++;
        }
        grades.push_back(pair<pair<int, int>, int>(pair<int, int>(-sum, y), i));
    }
}

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n, m, h;
        cin >> n >> m >> h;
        vector<pair<pair<int, int>, int>> grades;
        func(n, m, h, grades);
        sort(grades.begin(), grades.end(), mycmp);

        for (int i = 0; i < n; i++)
            if (grades[i].second == 0)
                cout << i + 1 << endl;
    }

    return 0;
}
