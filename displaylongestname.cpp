//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i]<< " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    string longest(int n, vector<string> &names) {
        // code here
        vector<int> ans;
        for( int i = 0 ; i<n  ; i++){
            int count =0 ; 
            for ( int j =0 ; j<names[i].size() ; j++ ){
                count++;
            }
            ans.push_back(count);
        }
        int maxlength = 0;
        for( int i = 0; i<ans.size() ; i++){
            if(ans[i] > maxlength){
                maxlength = ans[i];
            }
        }
        for( int i = 0 ; i < names.size() ; i++){
            if( names[i].length()==maxlength ){
                return names[i];
            }
        }
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        
        vector<string> names(n);
        Array::input(names,n);
        
        Solution obj;
        string res = obj.longest(n, names);
        
        cout<<res<<"\n";
        
    }
}

// } Driver Code Ends
