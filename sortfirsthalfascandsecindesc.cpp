//{ Driver Code Starts


#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends



class Solution{
  public:
    void customSort(int arr[], int n) {
        // code here
        int p=n/2;
        sort(arr,arr+p);
        sort(arr+p,arr+n);
        reverse(arr+p,arr+n);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        obj.customSort(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
