class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
        if(N==0){
            return -1;
        }
      sort(arr,arr+N);
      int cnt=1;
      int max_cnt=1;
      int num=arr[0]+1;
      for(int i =1;i<N;i++){
          if(arr[i]==num){
              cnt++;
              num+=1;
              max_cnt=max(cnt,max_cnt);
              
          }
          else{
              num=arr[i]+1;
              cnt=1;
              
          }
          while(i+1<N&&arr[i+1]==arr[i]) i++;
      }
      return max_cnt;
    }
};
