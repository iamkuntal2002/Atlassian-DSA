#include <bits/stdc++.h>
using namespace std;
int rev(int n)
{
    int res = 0;
    for (; n > 0; n /= 10)
        res = res * 10 + n % 10;
    return res;
}
int countNicePairs(vector<int> &nums)
{
    unordered_map<int, int> m;
    int res = 0;
    for (auto n : nums)
        res = (res + m[n - rev(n)]++) % 1000000007;
    return res;
}
int main()
{
    // You are given an array nums that consists of non - negative integers.Let us define rev(x) as the reverse of the non - negative integer x.For example, rev(123) = 321, and rev(120) = 21. A pair of indices(i, j) is nice if it satisfies all of the following conditions :
        // 0 <= i < j < nums.length nums[i] + rev(nums[j]) == nums[j] + rev(nums[i]) Return the number of nice pairs of indices.Since that number can be too large,return it modulo 109 + 7.
}