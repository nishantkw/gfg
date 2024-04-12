//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    void sortIt(long long arr[], long long n)
    {
        
         sort(arr,arr+n,greater<int>());
        long long a[n-1];
        int k=0;
        for(int i=0;i<n;i++){
            if(arr[i]%2!=0){
                a[k++]=arr[i];
            }
        }
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                a[k++]=arr[i];
            }
        }
        for(int i=0;i<n;i++){
            arr[i]=a[i];
        }//code here.
    }
};

//{ Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long arr[n];

        for (int i = 0; i < n; i++) 
            cin >> arr[i];
        
        Solution ob;
        ob.sortIt(arr, n);

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
