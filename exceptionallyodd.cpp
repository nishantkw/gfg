class Solution{   
public:
    int getOddOccurrence(int arr[], int n) {
       unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(mp[arr[i]]%2==1)return arr[i];
        }
        return -1;
    }
};
