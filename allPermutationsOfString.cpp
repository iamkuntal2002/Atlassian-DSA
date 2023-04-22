#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void helper(unordered_map<char, int> &mp, int len, vector<string> &res, string curr)
    {
        if (len == 0)
        {
            res.push_back(curr);
            return;
        }
        for (auto pr : mp)
        {
            char ch = pr.first;
            int count = pr.second;
            for (int i = 0; i < count; i++)
            {
                string temp = curr;
                temp.push_back(ch);
                mp[ch]--;
                helper(mp, len - 1, res, temp);
                mp[ch]++;
            }
        }
    }
    vector<string> find_permutation(string S)
    {
        // Code here there
        unordered_map<char, int> mp;
        for (char c : S)
            mp[c]++;
        vector<string> res;
        helper(mp, S.length(), res, "");
        set<string> st;
        for (string s : res)
            st.insert(s);
        res.clear();
        for (string s : st)
            res.push_back(s);
        return res;
    }
};
int main()
{
}