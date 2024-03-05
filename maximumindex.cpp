class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int arr[], int n) 
    { 
        // Your code here
         int ans=-1;
        
        vector<int> minArray(n,0);
        vector<int> maxArray(n,0);
        
        minArray[0]=arr[0];
        maxArray[n-1]=arr[n-1];
        
        for(int i=1;i<n;i++)
        {
            minArray[i]=min(minArray[i-1],arr[i]);
        }
        for(int j=n-2;j>=0;j--)
        {
            maxArray[j]=max(maxArray[j+1],arr[j]);
        }
        
        int i=0,j=0;
        while(i<n && j<n)
        {
            if(maxArray[j]>=minArray[i])
            {
                ans = max(ans,j-i);
                j++;
            }
            else
            {
                i++;
            }
            
        }
        return ans;
    
  
    }
};
