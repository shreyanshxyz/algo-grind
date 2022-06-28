class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
//         it has to be in every edge
//         condition 1 = first node of first pair == first node of second pair or
//         condition 2 = first node of first pair == second node of second pair we return the first node since it is the one which is the center
//         else we return the second node
        
        if(edges[0][0] == edges[1][0] || edges[0][0] == edges[1][1]) {
            return edges[0][0];
        } else {
            return edges[0][1];
        }
    }
};