class Solution {
private:
	vector<vector<int>> _res;
	vector<bool> _visited;
	void DFS(const vector<int>& nums, vector<int>& cur){
		if(cur.size()==nums.size()){
			_res.push_back(cur);
			return;
		}
		for (int i = 0; i < nums.size();++i){//because it is a problem about permutation, we have to iterate from 0.
			if(_visited[i])//1st step to remove duplicates
				continue;
			if(i && !_visited[i-1] && nums[i]==nums[i-1])//2nd step to remove duplicates
				continue;
			_visited[i] = true;
			cur.push_back(nums[i]);
			DFS(nums, cur);
			cur.pop_back();
			_visited[i] = false;
		}
	}
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
		sort(nums.begin(), nums.end());//help to remove duplicates
		_visited.resize(nums.size(), false);
		vector<int> cur;
		DFS(nums, cur);
		return _res;
	}
};