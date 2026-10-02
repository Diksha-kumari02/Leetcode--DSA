class Solution {
public:
    vector<int> fairCandySwap(vector<int>& alicesizes, vector<int>& bobsizes) {
        int sumA=0;
        int sumB=0;
        for(int x:alicesizes){
            sumA+=x;
        }
        for(int x:bobsizes){
            sumB+=x;
        }
        int diff = (sumA-sumB)/2;
        unordered_set<int>st;
        for(int x:bobsizes){
           st.insert(x);
        }
        for(int x:alicesizes){
           int y=x-diff;

           if(st.count(y)>0){
            return{x,y};

           }
        }
        return{};
    }
};