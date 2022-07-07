class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int> ans;
        vector<bool>vis(n, false);
//         we mark every node with an indegree as 1
        for (auto& e: edges){
            vis[e[1]] = true;
        }
        
//         if no indegrees, we push it into our ans
        for (int i = 0; i < n; ++i)
            if (vis[i] == false)
                ans.push_back(i);
        return ans;
    }
};