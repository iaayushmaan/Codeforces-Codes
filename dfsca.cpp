#include <iostream>

int findDiagonalNumber(int target, int n)
{
    int row = (target - 1) / n;
    int col = (target - 1) % n;
    int k = 1, t = 0;

    if (target == n * n)
        return 2 * n - 1;

    for (int i = 0; i < n + n - 1; i++)
    {
        if (target > t && target <= k + t)
            return i + 1;

        t = k + t;

        if (k < n)
            k++;
        else
            k--;
    }

    return 0;
}

int main()
{
    int n;
    std::cin >> n;

    int q;
    std::cin >> q;

    for (int i = 0; i < q; i++)
    {
        int target;
        std::cin >> target;

        int diagonalNumber = findDiagonalNumber(target, n);

        std::cout << diagonalNumber << std::endl;
    }

    return 0;
}
