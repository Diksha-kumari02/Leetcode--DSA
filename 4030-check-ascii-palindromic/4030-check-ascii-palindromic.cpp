class Solution {
public:
    bool isPalindromic(string s) {
        string binary = "";
        for(int i=0;i<s.length();i++){
            binary+=bitset<8>((int)s[i]).to_string();
        }
     int i=0;
     int j=binary.length()-1;
     while(i<j){
          if(binary[i]!=binary[j]){
                  return false;
           }
         i++;
         j--;
       }   

       return true; 
    }
};