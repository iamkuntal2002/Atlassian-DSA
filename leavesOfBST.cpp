#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
int getLeaves(vector<int> &temp, TreeNode *root)
{
    if (root == nullptr)
        return 0;
    int left = getLeaves(temp, root->left);
    int right = getLeaves(temp, root->right);
    if (left == 0 && right == 0)
    {
        temp.push_back(root->val);
        return -1;
    }
    if (left == -1)
        root->left = nullptr;
    if (right == -1)
        root->right = nullptr;
    return 1;
}
vector<vector<int>> findLeaves(TreeNode *root)
{
    vector<vector<int>> res;
    while (root && (root->left || root->right))
    {
        vector<int> temp;
        getLeaves(temp, root);
        res.push_back(temp);
    }
    res.push_back({root->val});
    return res;
}