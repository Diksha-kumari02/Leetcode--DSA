class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int total=0;
        for(int i=0;i<nums.size();i++){
            total+=nums[i];
        }
         int leftsum=0;
        for(int i=0;i<nums.size();i++){
            
            int right=total-leftsum-nums[i];

            if(leftsum==right){
                return i;
            }

         leftsum+=nums[i];
            
        }    
        
       return -1;
    }
};