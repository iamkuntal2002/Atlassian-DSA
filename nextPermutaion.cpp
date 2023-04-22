#include <bits/stdc++.h>
using namespace std;

// steps
// i. get the first element from the end where nums[i-1] < nums[i], say pos = i
//ii. get the next pos where nums[i] > nums[pos], from the end of the array
//iii. swap the nums[pos] and nums[next]
//iv. reverse from pos to end
void nextPermutation(vector<int> &nums)
{
    int id = -1;
    int n = nums.size();
    for (int i = n - 1; i > 0; i--)
    {
        if (nums[i] > nums[i - 1])
        {
            id = i; //getting the index
            break;
        }
    }
    cout << id << endl;
    if (id == -1)   //if nums is sorted in decending order then simply return the reverse
        reverse(nums.begin(), nums.end());
    else
    {
        int next = id;
        for (int i = id + 1; i < n; i++)
        {
            if (nums[i] > nums[id - 1] && nums[i] <= nums[next])
                next = i;   //getting the next pos
        }
        swap(nums[id - 1], nums[next]); //swap between nums[pos] and nums[next]
        reverse(nums.begin() + id, nums.end()); //reverser from pos to end
    }
}

int main()
{
    vector<int> v = {1, 2, 3,6,5,4};
}