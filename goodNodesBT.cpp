#include<bits/stdc++.h>
using namespace std;

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
public:
    int helper(TreeNode *root, int currval){
        if(root == NULL) return 0;
        int res = 0;
        if(root->val >= currval) res= 1;
        else res = 0;
        currval = max(currval,root->val);
        res += helper(root->left,currval);
        res += helper(root->right,currval);
        return res;
    }
    int goodNodes(TreeNode* root) {
        return helper(root,root->val);        
    }
};
int main(){
// Given a binary tree root, a node X in the tree is named good if in the path from root to X there are no nodes with a value greater than X.
}