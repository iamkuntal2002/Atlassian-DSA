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

class Solution
{
public:
    TreeNode *insertIntoBST(TreeNode *root, int val)
    {
        TreeNode *node = new TreeNode(val);
        if (root == NULL)
            return node;
        TreeNode *curr = root;
        while (true)
        {
            if (curr->val > val)
            {
                if (curr->left != NULL)
                    curr = curr->left;
                else
                {
                    curr->left = node;
                    break;
                }
            }
            else
            {
                if (curr->right != NULL)
                    curr = curr->right;
                else
                {
                    curr->right = node;
                    break;
                }
            }
        }
        return root;
    }
};
int main(){
    
}