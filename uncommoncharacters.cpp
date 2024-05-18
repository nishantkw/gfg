//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            // code here
            
           vector<char>v;
           for(int i=0;i<B.length();i++){
               v.push_back(B[i]);
           }
           for(int i=0;i<A.length();i++){
               v.push_back(A[i]);
           }
           sort(v.begin(), v.end());
           v.erase(unique(v.begin(), v.end()), v.end());
        string s="";
        for(int i=0;i<v.size();i++){
        auto it = find(B.begin(),B.end(), v[i]);
        if (it != B.end()){
            continue;
        } 
        else{
            s=s+v[i];
        }
        }
        
        for(int i=0;i<v.size();i++){
        auto it = find(A.begin(),A.end(), v[i]);
        if (it != A.end()){
            continue;
        } 
        else{
            s=s+v[i];
        }
        }
        
        sort(s.begin(),s.end());
        if(s.empty()){
            return "-1";
        } 
            return s;
        }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
