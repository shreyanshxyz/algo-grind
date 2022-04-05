class Solution {
public:
    int maxArea(vector<int>& height) {
        int water = 0;
        int l = 0, r = height.size() - 1;; // left and right pointers
        while (l < r) { // we start traversing from left to right
            int h = min(height[l], height[r]); // we take a h variable for the current minimum value 
            // The minimum value between leftmost and rightmost is H; for this iteration;
            water = max(water, (r - l) * h); // The maximum area of water that can be contained in each iteration is the answer.
            while (height[l] <= h && l < r) l++;
            while (height[r] <= h && l < r) r--;
        }
        return water;
    }
};