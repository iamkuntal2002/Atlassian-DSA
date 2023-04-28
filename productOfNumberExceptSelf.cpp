#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int>res(size,1);
        int rp = 1;
        for(int i =0; i<size; i++){ //for the left pass
            res[i] = rp;
            rp = rp * nums[i];
        }
        rp = 1;
        for(int i = nums.size() - 1; i>= 0; i--){   //for the right pass
            res[i] = rp*res[i];
            rp *= nums[i];
        }
        return res;
    }
};

// 1 2 3 4
// left pass
// i->0 rp =1*1,
// i->1 rp = 1*2= 2
// i->2 rp = 2*3= 6
// i->3 rp= 6*4= 24
// res = 1 1 2 6
// right pass
// i->3 rp = 1*4,
// i->2 rp = 4*3=12,
// i->3 rp = 12*2=24
// 1->0 rp = 24*1=24
// res = 24 12 8 6
