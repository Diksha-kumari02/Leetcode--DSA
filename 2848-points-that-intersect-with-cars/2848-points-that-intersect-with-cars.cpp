class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        vector<int> covered(101,0);
        for(int i=0;i<nums.size();i++){
            int start=nums[i][0];
            int end=nums[i][1];

            for(int j=start;j<=end;j++){
                covered[j]=1;

            }
        }

        int count=0;
        for(int i=0;i<=100;i++){
            if(covered[i]==1){
                count++;
            }
        }
        return count;
        
    }
};