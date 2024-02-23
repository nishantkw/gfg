class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        bool flag =false;
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        for(int i=0;i<N;i++)
        {
            if(A[i]!=B[i])
            return false;
            else
           flag=true;
    
        }
        if(flag)
        {return true;}
    }
};
