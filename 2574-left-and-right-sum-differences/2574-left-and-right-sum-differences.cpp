class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
       vector<int>ans(nums.size());
       int total=0;
       for(int i=0;i<nums.size();i++){
         total+=nums[i];

       }
       int left=0;
       for(int i=0;i<nums.size();i++){
         int right=total-left-nums[i];

          ans[i] = abs(left - right);

          left+=nums[i];
       }
       return ans;
    }
};