#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int count = 0;
    void helper(int n,int curr,vector<int>&vis){
        if(curr>n){ //means it is a valid array and time to backtract
            count++;
            return;
        }
        for(int i = 1;i<=n;i++){
            if(vis[i] == 0 && (i%curr == 0 || curr%i == 0)){
                vis[i] = 1;
                helper(n,curr+1,vis);
                vis[i] = 0;
            }
        }
    }
    int countArrangement(int n) {
        vector<int> vis(n+1,0);
        helper(n,1,vis);
        return count;
    }
};