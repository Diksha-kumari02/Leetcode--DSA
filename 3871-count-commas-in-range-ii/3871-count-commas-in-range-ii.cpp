class Solution {
public:
    long long countCommas(long long n) {
       int long long start=1000;
       int long long ans=0;
       int long long commas=1;
       while(start<=n){
        long long end=start*1000-1;
        long long last=min((long long)n,end);
        ans+=(last-start+1)*commas;
        start*=1000;
        commas++;

       }
       return ans;
    }
};