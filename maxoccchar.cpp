//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        map<char,int>mp;
        for(int i=0;i<str.length();i++){
            mp[str[i]]++;
        }
        int max=0;
        char c;
        for(auto it:mp){
          if(it.second>max){
                max=it.second;
                c=it.first;
            }
        }    
        return c;
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code
