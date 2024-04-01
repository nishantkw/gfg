//{ Driver Code Starts
#include<iostream>
using namespace std;
int num(int a[], int n, int k);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
		{
			cin>>a[i];
		}
		int k;
		cin>>k;
		cout<<num(a,n,k)<<endl;
	}
}
// } Driver Code Ends


/*Complete the function given below*/
int num(int a[], int n, int k)
{
     //add code here.
     int count = 0;
    string stk = to_string(k);
    
    for (int i = 0; i < n; i++) {
        string str = to_string(a[i]); // Convert individual element to string
        int m = str.length();
        for (int j = 0; j < m; j++) { 
            if (str[j] == stk[0]) { // Compare with the character representation of k
                count++;
            }
        }
    }
    
    return count;
     
}
