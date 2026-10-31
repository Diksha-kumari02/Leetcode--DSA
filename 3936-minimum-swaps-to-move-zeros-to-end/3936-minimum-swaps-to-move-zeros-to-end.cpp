class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        int count=0;
        while(left<right){
            if(nums[left]==0 && nums[right]!=0){
                swap(nums[left],nums[right]);
                count++;
                left++;
                right--;
            }else if(nums[left]!=0 ){
                left++;
            }
            else{
                right--;
            }
        }
        return count;
    }
};