class Solution {
public:
    int maxScore(string s) {
        int rightones=0;
        for(int c:s){
            if(c=='1'){
                rightones++;
            }
        }
        int leftzeros=0;
        int score;
        int ans=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='0'){
                leftzeros++;
            }else{
                rightones--;
            }
            score=leftzeros+rightones;
          ans=max(ans,score);
           
        }
         
        return ans;
        
    }
};