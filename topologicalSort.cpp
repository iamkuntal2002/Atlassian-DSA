#include <bits/stdc++.h>
using namespace std;

class Solution
{
	public:
	void getindegree(vector<int> adj[], vector<int> &in,int v){
	    for(int i =0;i<v;i++){
	        for(auto v : adj[i]){
	            in[v]++;
	        }
	    }
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int> indegree(V+1,0);
	    getindegree(adj,indegree,V);
	    queue<int> qu;
	    for(int i =0;i<V;i++){
	        if(indegree[i] == 0) qu.push(i);
	    }
	    vector<int> res;
	    while(!qu.empty()){
	        int node = qu.front();
	        qu.pop();
	        res.push_back(node);
	        for(auto v : adj[node]){
	            indegree[v]--;
	            if(indegree[v] ==0) qu.push(v);
	        }
	    }
	    return res;
	}
};



int main() {
    
}