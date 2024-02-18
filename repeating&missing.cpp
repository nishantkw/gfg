//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> a, int n) {
        
        
         vector<int> ans;

        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }
        for(auto it:mp){
            if(it.second>1){
             ans.push_back(it.first);
            }
        }
       
        int i = 1;
        while (i <= n) {
            if (mp.find(i) == mp.end()) {
                ans.push_back(i);
                break;
            }
            i++;
        }
        
        
        return ans;
     
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends
