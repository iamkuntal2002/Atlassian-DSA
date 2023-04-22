#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool dfs(int s, vector<bool> &vis, vector<bool> &currvis, vector<int> adj[]){
        vis[s] = true;
        currvis[s] = true;
        vector<int> data = adj[s];
        for(int i : data){
            if(!vis[i]){
                if(dfs(i,vis,currvis,adj)) return true;
            }
            else if(vis[i] && currvis[i]) return true;
        }
        currvis[s] = false;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        //topological sort
        int n = numCourses;
        vector<bool> vis(n,false), currvis(n,false);
        vector<int> adj[n];
        for(auto &v : prerequisites){
            vector<int> data = v;
            int a = data[0];
            int b = data[1];
            adj[a].push_back(b);
        }
        for(int i =0; i<n;i++){
            if(!vis[i]){
                if(dfs(i,vis,currvis,adj))     //dfs return false if cycle not present
                    return false;
            }
        }
        return true;
    }
};
int main(){
    
}