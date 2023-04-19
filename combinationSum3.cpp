#include <bits/stdc++.h>
using namespace std;
void helper(vector<vector<int>> &res, vector<int> &curr, int k, int n, int st)
{
    if (k == 0 && n == 0)
    {
        res.push_back(curr);
        return;
    }
    for (int i = st; i <= 9; i++)
    {
        curr.push_back(i);
        helper(res, curr, k - 1, n - i, i + 1);
        curr.pop_back();
    }
}
vector<vector<int>> combinationSum(int k, int n)
{
    // code here
    vector<vector<int>> res;
    vector<int> curr;
    helper(res, curr, k, n, 1);
    return res;
}
int main()
{
//     Find all valid combinations of K numbers that sum upto to N such that the following conditions are true :

//         Only number 1 through 9 are used.Each number is used atmost once.Return the list of all possible valid combinations.

//         Note : The list must not contain the same combination twice,
//         and the combinations returned in any order.
}