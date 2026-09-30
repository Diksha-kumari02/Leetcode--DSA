class Solution {
public:

    char findKthBit(int n, int k) {
     if(n==1){
        return '0';
     }
     int mid;
     mid=pow(2,n-1);
     if(k==mid){
        return '1';
     }
     if(k<mid){
        return findKthBit(n-1,k);
     }
     int newk=2*mid-k;
       char ans= findKthBit(n-1,newk);

       if(ans=='0'){
        return '1';
       }
       else{
        return '0';
       }
        
    
    }
};