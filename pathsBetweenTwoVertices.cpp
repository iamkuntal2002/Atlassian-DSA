//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to count paths between two vertices in a directed graph.
    void dfs(int v, vector<int> adj[], int &s, int &dest,vector<bool> &vis, int &count){
        vis[s] = true;
        if(s == dest) count++;
        for(auto u : adj[s]){
            if(!vis[u])
                dfs(v,adj,u,dest,vis,count);
        }
        vis[s] = false;
    }
    int countPaths(int V, vector<int> adj[], int source, int destination) {
        // Code here
        int count =0;
        vector<bool> vis(V+1,false);
        dfs(V,adj,source,destination,vis,count);
        return count;
    }
};

int main() {
//    Given a Directed Graph having V nodes numbered from 0 to V-1, and E directed edges. Given two nodes, source and destination, count the number of ways or paths between these two vertices in the directed graph. These paths should not contain any cycle.
}