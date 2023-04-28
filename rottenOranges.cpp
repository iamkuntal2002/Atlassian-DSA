#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isvalid(int i,int j,int m,int n,vector<vector<int>>& grid){
        if(i>=0 && j>=0 && i<m && j<n && grid[i][j] == 1) return true;
        return false;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        int time =0;
        int m = grid.size();
        int n = grid[0].size();
        queue<pair<int,int>> qu;
        int fresh =0;
        for(int i =0;i<m;i++){
            for(int j =0;j<n;j++){
                if(grid[i][j] == 2){
                    qu.push({i,j});     //push the position of the rotten oranges
                }
                else if(grid[i][j] ==1)
                    fresh++;
            }
        }
        if(fresh == 0) return 0;    //that means the oranges are already rotten
        
        //bfs traversal
        while(!qu.empty()){
            int size = qu.size();
            int temp =0;
            for(int i =0;i<size;i++){
                auto pr = qu.front();
                qu.pop();
                int x = pr.first;
                int y = pr.second;
                int xc[4] = {1,-1,0,0};
                int yc[4] = {0,0,1,-1};
                for(int j =0;j<4;j++){
                    int nx = xc[j]+x;
                    int ny = yc[j]+y;
                    if(isvalid(nx,ny,m,n,grid)) {
                        temp++;
                        grid[nx][ny] = 2;
                        qu.push({nx,ny});
                    }
                }
            }
            if(temp != 0) time++;
        }
        
        //check if there is any fresh oranges left or not
        for(int i =0;i<m;i++){
            for(int j =0;j<n;j++){
                if(grid[i][j] == 1)
                    time = 0;
            }
        }
        if(time ==0) return -1;
        return time;
    }
};