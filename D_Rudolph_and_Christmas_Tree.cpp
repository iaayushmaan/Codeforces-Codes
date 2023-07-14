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
#include <bits/stdc++.h>
#define ll long long
#define loop(o, n) for (int i = 0; i < n; i++)
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
using namespace std;
// #define m 1e9+7

void func(int numBuildings, int baseLength, int height, double totalArea, int pos[])
{
    for (int i = 0; i < numBuildings; i++)
    {
        cin >> pos[i];
        if (i && pos[i] < pos[i - 1] + height)
        {
            double overlapHeight = pos[i - 1] + height - pos[i];
            double overlapBase = overlapHeight * baseLength / height;
            totalArea -= overlapBase * overlapHeight / 2;
        }
    }
    cout << fixed << setprecision(7) << totalArea << endl;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int numBuildings, baseLength, height;
        cin >> numBuildings >> baseLength >> height;

        double totalArea = static_cast<double>(height) * baseLength / 2 * numBuildings;
        int buildingPositions[numBuildings];
        func(numBuildings, baseLength, height, totalArea, buildingPositions);
    }
    return 0;
}
