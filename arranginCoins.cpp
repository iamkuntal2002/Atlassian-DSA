#include <bits/stdc++.h>
using namespace std;
int arrangeCoins(int n)
{
    long s = 0;
    long e = n;

    while (s <= e)
    {
        long mid = s + (e - s) / 2;
        long a = mid * (mid + 1) / 2;
        if (a == n)
        {
            return mid;
        }

        if (a <= n)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return s - 1;
}
int main()
{
    // You have n coins and you want to build a staircase with these coins.The staircase consists of k rows where the ith row has exactly i coins.The last row of the staircase may be incomplete.
        // Given the integer n,return the number of complete rows of the staircase you will build.
}