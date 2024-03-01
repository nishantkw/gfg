class Solution {
  public:
    //Function to find two repeated elements.
    vector<int> twoRepeated (int arr[], int n) {
        // Your code here
        unordered_map<int,int>nrr;
        vector<int>ans;
        for(int i=0;i<(n+2);i++){
            nrr[arr[i]]++;
            if(nrr[arr[i]]==2){
                ans.push_back(arr[i]);
            }
        }
        ans.resize(3);
        ans.shrink_to_fit();
        return ans;
    
