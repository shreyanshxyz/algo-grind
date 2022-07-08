class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
//         we follow the bfs approach
//         we make an unordered set to declare our visited rooms
        unordered_set<int> vis;
//         a queue to store the rooms
        queue<int>q;
        q.push(0);

//         we do a bfs traversal
        while(!q.empty()){
            int node = q.front();
            q.pop();
//             we mark our current node as visited
            vis.insert(node);
// we iterate through its adjacent nodes (or in the question's term, the keys in the room)
            for(auto it: rooms[node]){
// if we have not visited the current adjacent node, we push it into the queue
                if(vis.find(it) == vis.end()){
                    q.push(it);
                }
            }
        }
// we use a simple check to see, if we get the same no of keys as the rooms, we return true
        if(vis.size() == rooms.size())
            return true;
        return false;
    }
};