#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        if(nums.size()<3) return 0;
        sort(nums.begin(),nums.end(),greater<int>());
        int perimeter =0;
        for(int i =0;i<nums.size()-2;i++){
            perimeter= nums[i]+nums[i+1]+nums[i+2];
            if(nums[i]<nums[i+1]+nums[i+2]) return perimeter;
        }
        return 0;
    }
};