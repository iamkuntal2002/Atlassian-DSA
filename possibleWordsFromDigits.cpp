#include <bits/stdc++.h>
using namespace std;
void helper(string &dig, unordered_map<char, string> &mp, vector<string> &res, string curr, int ind)
{
    if (ind == dig.size())
    {
        res.push_back(curr);
        return;
    }
    string s = mp[dig[ind]];
    for (int i = 0; i < s.size(); i++)
    {
        curr.push_back(s[i]);
        helper(dig, mp, res, curr, ind + 1);
        curr.pop_back();
    }
}
vector<string> possibleWords(int a[], int N)
{
    // Your code here
    unordered_map<char, string> mp;
    mp['2'] = "abc";
    mp['3'] = "def";
    mp['4'] = "ghi";
    mp['5'] = "jkl";
    mp['6'] = "mno"; 
    mp['7'] = "pqrs";
    mp['8'] = "tuv";
    mp['9'] = "wxyz";
    vector<string> res;
    string curr = "";
    string digits = "";
    for (int i = 0; i < N; i++)
        digits.push_back(a[i] + '0');
    helper(digits, mp, res, curr, 0);
    sort(res.begin(), res.end());
    return res;
}
int main()
{
}