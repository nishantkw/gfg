//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
  public:
    int findDiff(int arr[], int n) {
      unordered_map<int,int>mp;
        for(int i=0; i<n;i++){
            mp[arr[i]]++;
        }
        
        int maxi = INT_MIN;
        int mini = INT_MAX;
        
        for(const auto& it:mp){
            mini = min(mini, it.second);
            maxi = max(maxi, it.second);
        }
        
        return maxi - mini;  
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n], i;
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.findDiff(arr, n) << "\n";
    }
    return 0;
}

// } Driver Code Ends
