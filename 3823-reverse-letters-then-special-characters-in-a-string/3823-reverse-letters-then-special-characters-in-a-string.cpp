class Solution {
public:
    string reverseByType(string s) {
        int left=0;
        int right=s.size()-1;
        while(left<right){
            if(s[left]<'a' || s[left]>'z'){
                left++;
            }
            else if(s[right]<'a' || s[right]>'z'){
                right--;
            }
            else{
                swap(s[left],s[right]);
                left++;
                right--;
            }
        }

        left=0;
        right=s.size()-1;
        while(left<right){
            if(s[left]>='a'&& s[left]<='z'){
                left++;
            }
            else if(s[right]>='a'&&s[right]<='z'){
                right--;
            }
            else{
                swap(s[left],s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};