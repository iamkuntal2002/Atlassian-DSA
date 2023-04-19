//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node *left;
    Node *right;
};


class Solution
{
public:
    // Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root)
    {
        // Your code here
        vector<int> res;
        if (root == NULL)
            return res;
        queue<pair<Node *, int>> qu; // node,vertical
        qu.push({root, 0});
        map<int, vector<int>> mp;
        while (!qu.empty())
        {
            auto pr = qu.front();
            qu.pop();
            int vert = pr.second;
            Node *node = pr.first;
            mp[vert].push_back(node->data);
            if (node->left)
            {
                qu.push({node->left, vert - 1});
            }
            if (node->right)
            {
                qu.push({node->right, vert + 1});
            }
        }
        for (auto pr : mp)
        {
            auto v = pr.second;
            res.insert(res.end(), v.begin(), v.end());
        }
        return res;
    }
};

int main()
{
}
