class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> q(stones.begin(),stones.end()); // priority queue to store the values of all stones
        while(q.size() > 1) {
// we take y and x as two elements and compare them just like described in the problem
            int y = q.top(); 
            q.pop();
            int x = q.top();
            q.pop();
            if(x!=y)
                q.push(y-x);
        }
// we return the last element of the queue or 0
        if(q.empty()){
            return 0;
        } else {
            return q.top();
        }
    }
};