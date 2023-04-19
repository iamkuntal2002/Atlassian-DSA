#include <bits/stdc++.h>
using namespace std;

void helper(vector<int> &cand, vector<vector<int>> &res, vector<int> &curr, int index, int currsum, int target)
{
    // base case
    if (currsum == target)
    {
        res.push_back(curr);
        return;
    }
    if (currsum > target || index == cand.size())
        return;

    // logic
    curr.push_back(cand[index]);
    helper(cand, res, curr, index, currsum + cand[index], target);
    curr.pop_back(); // back-track
    helper(cand, res, curr, index + 1, currsum, target);
}
vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    vector<vector<int>> res;
    vector<int> curr;
    helper(candidates, res, curr, 0, 0, target);
    return res;
}
int main()
{
    // Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.

    // The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the frequency of at least one of the chosen numbers is different.

    // The test cases are generated such that the number of unique combinations that sum up to target is less than 150 combinations for the given input.
}