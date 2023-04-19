#include <bits/stdc++.h>
using namespace std;
bool containsNearbyAlmostDuplicate(vector<int> &nums, int indexDiff, int valueDiff)
{
    vector<pair<int, int>> v; // val,pos
    for (int i = 0; i < nums.size(); i++)
    {
        v.push_back(make_pair(nums[i], i));
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if (abs(v[i].first - v[j].first) <= valueDiff && abs(v[i].second - v[j].second) <= indexDiff)
                return true;
            else if (abs(v[i].first - v[j].first) > valueDiff)
                break;
        }
    }
    return false;
}
int main()
{
    // You are given an integer array nums and two integers indexDiff and valueDiff.Find a pair of
        // indices(i, j) such that :
        // i != j,
        // abs(i - j) <= indexDiff.abs(nums[i] - nums[j]) <= valueDiff, and Return true if such pair exists or false otherwise.
}