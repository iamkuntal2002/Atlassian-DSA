#include <bits/stdc++.h>
using namespace std;
int helper(vector<int> &dp, vector<int> &num, int target)
{
    if (target == 0)
        return 1;
    if (target < 0)
        return 0;
    if (dp[target] != -1)
        return dp[target];
    dp[target] = 0;
    for (int i = 0; i < num.size(); i++)
    {
        dp[target] += helper(dp, num, target - num[i]);
    }
    return dp[target];
}
int findWays(vector<int> &num, int tar)
{
    // Write your code here.
    vector<int> dp(tar + 1, -1);
    return helper(dp, num, tar);
}
int main()
{
    // Given an array of distinct integers nums and a target integer target, return the number of possible combinations that add up to target.The test cases are generated so that the answer can fit in a 32-bit integer.
}