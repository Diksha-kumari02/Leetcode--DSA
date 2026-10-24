class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) { 
        for(int num=left;num<=right;num++){
           bool covered =false;
           for(int i=0;i<ranges.size();i++){
            if(ranges[i][0]<=num && num <=ranges[i][1]){
                covered=true;
                break;

            }

           }
           if(covered==false){
            return false;
           }

        }
       return true;
        
    }
};