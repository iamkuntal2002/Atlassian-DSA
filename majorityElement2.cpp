#include <bits/stdc++.h>
using namespace std;
vector<int> majorityElement(vector<int> &nums)
{
    int el1 = -1, el2 = -1, count1 = 0, count2 = 0;
    for (auto el : nums)
    {
        if (el == el1)
            count1++;
        else if (el == el2)
            count2++;
        else if (count1 == 0)
        {
            el1 = el;
            count1 = 1;
        }
        else if (count2 == 0)
        {
            el2 = el;
            count2 = 1;
        }
        else
        {
            count1--;
            count2--;
        }
    }
    count1 = count2 = 0;
    for (auto el : nums)
    {
        if (el == el1)
            count1++;
        else if (el == el2)
            count2++;
    }
    vector<int> res;
    if (count1 > nums.size() / 3)
        res.push_back(el1);
    if (count2 > nums.size() / 3)
        res.push_back(el2);
    return res;
}
int main()
{
}