#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void helper(vector<bool> &vis, vector<int> &nums, set<vector<int>> &res, vector<int> &curr)
    {
        if (curr.size() == nums.size())
        {
            res.insert(curr);
            return;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (vis[i] == true)
                continue;
            curr.push_back(nums[i]);
            vis[i] = true;
            helper(vis, nums, res, curr);
            curr.pop_back();
            vis[i] = false;
        }
    }
    vector<vector<int>> permuteUnique(vector<int> &nums)
    {
        set<vector<int>> res;
        vector<int> curr;
        vector<bool> vis(nums.size());
        helper(vis, nums, res, curr);
        vector<vector<int>> ans;
        for (auto it = res.begin(); it != res.end(); ++it)
        {
            ans.push_back(*it);
        }
        return ans;
    }
};
int main()
{
}