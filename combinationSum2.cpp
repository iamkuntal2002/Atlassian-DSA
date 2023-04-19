#include <bits/stdc++.h>
using namespace std;
void helper(vector<int> &arr, vector<vector<int>> &res, vector<int> &curr, int k, int currsum, int ind)
{
    if (currsum == k)
    {
        res.push_back(curr);
        return;
    }
    // currsum += arr[ind];
    if (currsum > k || ind == arr.size())
        return;
    curr.push_back(arr[ind]);
    helper(arr, res, curr, k, currsum + arr[ind], ind + 1);
    curr.pop_back();
    int newind = ind + 1;
    while (newind < arr.size() && arr[newind] == arr[ind])
        newind++;
    helper(arr, res, curr, k, currsum, newind);
}
vector<vector<int>> CombinationSum2(vector<int> arr, int n, int k)
{
    // code here
    vector<vector<int>> res;
    vector<int> curr;
    sort(arr.begin(), arr.end());
    helper(arr, res, curr, k, 0, 0);
    return res;
}
int main()
{
    // Given an array of integers arr, length of the array  N, and an integer K, find all the unique combinations in arr where the sum of the combination is equal to K. Each number can only be used once in a combination.
}