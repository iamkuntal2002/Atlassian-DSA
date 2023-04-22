#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void helper(vector<bool> &vis, vector<int> &nums,vector<vector<int>> &res, vector<int> &curr){
        if(curr.size() == nums.size()){
            res.push_back(curr);
            return;
        }
        for(int i = 0;i<nums.size();i++){
            if(vis[i]== true) continue;
            curr.push_back(nums[i]);
            vis[i] = true;
            helper(vis,nums,res,curr);
            curr.pop_back();
            vis[i] = false;
        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> curr;
        vector<bool> vis(nums.size());
        helper(vis,nums,res,curr);
        return res;
    }
};
int main(){

}