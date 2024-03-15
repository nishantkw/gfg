class Solution {
  public:
    int maximizeMoney(int n, int k) {
        // code her
    int ans=0;
        while(n>0){
            if((n&1)!=0){
                ans+=k;
            }
            n--;
        }
        return ans;
    }
  

};
