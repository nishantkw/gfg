
class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        
         int count =0;
        int l =0;
        for(long long i =0;i<n;i++)
        {
            count++;
            
            if(count == k)
            {
                reverse(arr.begin()+(i-(k-1)),arr.begin()+i+1); 
                l= l+k;
                count =0;
            }
        }
               reverse(arr.begin()+l,arr.begin()+n);
    


    }
};
