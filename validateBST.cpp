//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

// } Driver Code Ends
class Solution
{
public:
    // Function to check whether a Binary Tree is BST or not.
    bool helper(Node *root, int left, int right)
    {
        if (root == NULL)
            return true;
        if (root->data <= left || root->data >= right)
            return false;
        return helper(root->left, left, root->data) && helper(root->right, root->data, right);
    }
    bool isBST(Node *root)
    {
        // Your code here
        if (root == NULL)
            return true;
        if (root->left == NULL && root->right == NULL)
            return true;
        return helper(root, INT_MIN, INT_MAX);
    }
};

int main()
{

    
}

// } Driver Code Ends