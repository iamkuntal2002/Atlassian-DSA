//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	int isNegativeWeightCycle(int n, vector<vector<int>>edges){
	    // Code here
	    vector<int> dist(n,1e8);
	    dist[0] = 0;
	    for(int i =0;i<n-1;i++){    //number of relaxation = n-1 
            for(auto ed : edges){
                int u = ed[0];
                int v = ed[1];
                int wt = ed[2];
                if(dist[v]> dist[u]+wt){
                    dist[v] = dist[u] + wt;
                }
	        }
	    }
	    for(auto ed : edges){
	        int u = ed[0];
            int v = ed[1];
            int wt = ed[2];
            if(dist[v] > dist[u]+wt){
                return 1;
            }
	    }
	    return 0;
	}
};

//{ Driver Code Starts.
int main(){
	
}
// } Driver Code Ends