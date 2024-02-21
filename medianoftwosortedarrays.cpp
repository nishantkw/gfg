class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        vector<int>ans;
        int m=array1.size();
        int n=array2.size();
        int i=0;
        int j=0;
        while(i<m&&j<n){
            if(array1[i]<array2[j]){
                ans.push_back(array1[i++]);
                
            }
            else{
                ans.push_back(array2[j++]);
            }
            
        }
        while(i<m){
             ans.push_back(array1[i++]);
        }
        while(j<n){
            ans.push_back(array2[j++]);
        }
        int size=m+n;
        if(size%2==1){
            return ans[size/2];
            
        }
        else{
            int ans1=ans[size/2];
            int ans2=ans[(size/2)-1];
            return (ans1+ans2)/2.0;
        }
    
    
    }
}
