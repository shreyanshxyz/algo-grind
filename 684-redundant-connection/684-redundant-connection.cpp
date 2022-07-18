class Solution {
 	vector<int>parent;
 	int find(int x) {
 		return parent[x] == x ? x : find(parent[x]);
 	}

public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {

 		int n = edges.size();
        
// Setting all individuals as their parents
 		parent.resize(n+1, 0);
 		for (int i = 0; i <= n; i++)
 			parent[i] = i;

        vector<int>res;
        
 		for (int i = 0; i < n; i++) {
            
// we find the parents of both the edges
 			int x = find(edges[i][0]);
 			int y = find(edges[i][1]);
// if they dont have the same parent then we set one as other's parent
 			if (x != y)
 				parent[y] = x;
 			else {
 				res.push_back(edges[i][0]);
 				res.push_back(edges[i][1]);
 			}
 		}

 		return res;

    }
};