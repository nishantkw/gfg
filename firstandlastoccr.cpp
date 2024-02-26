class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        // code here
          vector<int> ans;
        int first=0;
        for(int i=0; i<n; i++){
            if(arr[i]==x) {
                first=i;
                break;
                
            }
        }
        
        int last=0;
        for(int i=n-1; i>=0; i--){
            if(arr[i]==x) {
                last=i;
                break;
                
            }
            
        }
        if(last==0 and first!=0) last=first;
        if(first==0 and last==0){
            first=-1;
            last=-1;
        }
        
        ans.push_back(first);
        ans.push_back(last);
        return ans;
        
    }
};
