//{ Driver Code Starts
 

#include<bits/stdc++.h>
using namespace std;
 
int findDuplicate(int a[]);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int A[10];
		for(int i=0;i<10;i++)
		cin>>A[i];
		
		cout<<findDuplicate(A)<<endl;
	}
}
// } Driver Code Ends


    

int findDuplicate(int A[])
{
    // Your code goes here
    unordered_map<int,int>m;
    for(int i=0;i<10;i++){
        m[A[i]]++;
        
    }
    for(int i=0;i<10;i++){
        if(m[A[i]]>1){
            return A[i];
        }
    }
}
