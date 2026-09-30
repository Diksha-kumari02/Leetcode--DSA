class Solution {
public:
bool check(int n ,int x){
    if(pow(2, x) > n) {
            return false;
        }

    if(pow(2,x)==n){
            return true;
    }
            return check(n,x+1);
              
}
    bool isPowerOfTwo(int n){
        
    if(n<0){
        return false;
    }
     return check(n,0);

    }
};