//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool dfs(vector<int> adj[], vector<bool> &vis, vector<bool> &dfsvis, int node){
        vis[node] = true;
        dfsvis[node] = true;
        for(auto v : adj[node]){
            if(!vis[v]){
                if(dfs(adj,vis,dfsvis,v)) return true;
            }
            else if(vis[v] == true && dfsvis[v] == true) return true;
        }
        dfsvis[node] = false;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<bool> vis(V+1,false);
        vector<bool> dfsvis(V+1,false);
        for(int i =0;i<V;i++){
            for(int node : adj[i]){
                if(dfs(adj,vis,dfsvis,node))
                    return true;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {

    
    
}

// } Driver Code Ends