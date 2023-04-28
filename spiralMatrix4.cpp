#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode *head)
    {
        vector<vector<int>> res(m, vector<int>(n));
        int top = 0;
        int bottom = m - 1;
        int left = 0;
        int right = n - 1;
        int val = 0;
        int total = m * n;
        int count = 0;
        while (count < total)
        {
            // top row
            for (int i = left; i <= right && count < total; i++)
            {
                if (head != NULL)
                {
                    val = head->val;
                    head = head->next;
                }
                else
                    val = -1;
                res[top][i] = val;
                count++;
            }
            top++;

            // right col
            for (int i = top; i <= bottom && count < total; i++)
            {
                if (head != NULL)
                {
                    val = head->val;
                    head = head->next;
                }
                else
                    val = -1;
                res[i][right] = val;
                count++;
            }
            right--;

            // bottom row
            for (int i = right; i >= left && count < total; i--)
            {
                if (head != NULL)
                {
                    val = head->val;
                    head = head->next;
                }
                else
                    val = -1;
                res[bottom][i] = val;
                count++;
            }
            bottom--;

            // left col
            for (int i = bottom; i >= top && count < total; i--)
            {
                if (head != NULL)
                {
                    val = head->val;
                    head = head->next;
                }
                else
                    val = -1;
                res[i][left] = val;
                count++;
            }
            left++;
        }
        return res;
    }
};