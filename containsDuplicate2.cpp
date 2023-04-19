#include <bits/stdc++.h>
using namespace std;
bool containsNearbyDuplicate(vector<int> &nums, int k)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        if (mp.find(nums[i]) != mp.end() && abs(mp[nums[i]] - i) <= k)
            return true;
        else
            mp[nums[i]] = i;
    }
    return false;
}
int main()
{
    // Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.
}