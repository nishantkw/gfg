//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    // Your code here
   vector<int>v;
    int t=0;
    while(n>0)
    {
       if(n%10==0)
       {
           v.push_back(5);
       }
       else
       {
           v.push_back(n%10);
       }
       
       n=n/10;
    }
    
    reverse(v.begin(),v.end());
    
    for(int i=0;i<v.size();i++)
    {
        t=t*10+v[i];
    }
   
    return t;
}    
