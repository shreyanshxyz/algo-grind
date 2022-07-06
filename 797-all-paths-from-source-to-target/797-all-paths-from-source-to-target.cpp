class Solution {
public:
    void solve(vector<vector<int>>& graph, vector<vector<int>>& ans, vector<int>& path, int n){
        path.push_back(n);
        if (n == graph.size() - 1){
            ans.push_back(path);
        }
        
        for(auto it: graph[n]){
            solve(graph, ans, path, it);
            path.pop_back();
        }
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        vector<int> path;
        solve(graph, ans, path, 0);
        return ans;
    }
};