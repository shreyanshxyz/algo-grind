class Solution {
public:
    int dfs(int node, vector<int>& informTime, vector<vector<int>>& adj){
        int time=0;
        for(int &n:adj[node])
            time=max(time,dfs(n,informTime, adj));		
        return informTime[node]+time;		
    }
    
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        vector<vector<int>>adj(n);
        for(int i=0;i<manager.size();i++)				//Create Adjacency list
            if(manager[i]!=-1){
                adj[manager[i]].push_back(i);
            }
        return dfs(headID,informTime, adj);
    }
};