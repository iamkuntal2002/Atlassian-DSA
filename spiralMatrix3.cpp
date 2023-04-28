#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int x, int y) {
        vector<vector<int>>sol;
        int n = 0;
        int step=1;
	    while(n<rows*cols){
            for (int i = 0; i < step; ++i)
            {
                if(x>=0 and x<rows and y>=0 and y<cols)sol.push_back(vector<int>{x,y}),n++;
                y++;
            }
            for (int i = 0; i < step; ++i)
            {
                if(x>=0 and x<rows and y>=0 and y<cols)sol.push_back(vector<int>{x,y}),n++;
                x++;
            }
            step++;
            for (int i = 0; i < step; ++i)
            {
                if(x>=0 and x<rows and y>=0 and y<cols)sol.push_back(vector<int>{x,y}),n++;
                y--;
            }
            for (int i = 0; i < step; ++i)
            {
                if(x>=0 and x<rows and y>=0 and y<cols)sol.push_back(vector<int>{x,y}),n++;
                x--;
            }
            step++;
	    }        
        return sol;
    }
};