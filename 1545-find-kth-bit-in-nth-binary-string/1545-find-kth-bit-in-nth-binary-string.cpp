class Solution {
public:

   string invert(string a){
      for(int i=0;i<a.length();i++){
            if(a[i]=='0'){
                a[i]='1';
            }
               else{
                  a[i]='0';
               }
        }
        return a;
    }
    char findKthBit(int n, int k) {
        
        vector<string>s(n);
         s[0]="0";

           for(int i=1;i<n;i++){
                string temp=invert(s[i-1]);
        
                reverse(temp.begin(),temp.end());
                 s[i]=s[i-1]+"1"+temp;
           }     

         return s[n-1][k-1];   
    }
};