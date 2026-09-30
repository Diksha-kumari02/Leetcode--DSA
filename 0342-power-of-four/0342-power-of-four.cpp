class Solution {
public:
bool check(int n,int x){
    if(pow(4,x)==n){
        return true;
    }
    if(pow(4,x)>n){
        return false;
    }
    return check(n,x+1);
}
    bool isPowerOfFour(int n) {
        if(n<0){
            return false;

        }
        return check(n,0);
        
    }
};