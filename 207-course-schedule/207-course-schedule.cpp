class Solution {
public:
    bool solve(vector<int> adj[], vector<int>&vis, int i){
        if(vis[i] == 1){
            return true;
        }
        
        if(vis[i] == 0){
            vis[i] = 1;
            for(auto it: adj[i]){
                if(solve(adj, vis, it)){
                    return true;
                }
            }
        }
        vis[i] = -1;
        return false;
    }
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> topoAdj[numCourses];
        vector<int>vis(numCourses, 0);
        
        for(auto it: prerequisites){
            topoAdj[it[1]].push_back(it[0]);
        }
        
        for(int i = 0; i < numCourses; i++){
            if(solve(topoAdj,vis,i))
                return false;
            }
        return true;
    }
};