class Solution {
public:
	int wiggleMaxLength(vector<int>& nums) {
		if(nums.empty()) return 0;
		if(nums.size()==1) return 1;
		bool flag=true;
		for(int i=1;i<nums.size();i++){
			if(nums[i]!=nums[i-1]){
				flag=false;
			}
			nums[i-1]=nums[i]-nums[i-1];


		}
		int count=0;
		nums.pop_back();
		while(nums.size()>0 && nums[0]==0){
			nums.erase(nums.begin());
		}
		int cur=nums[0];
		for(int i=1;i<nums.size();i++){
			if((nums[i]>0 && cur<0) || (nums[i]<0 && cur>0)){
				count++;
				cur=nums[i];
			}
		}
		if(flag) return 1;
		return count+2;
	}
};