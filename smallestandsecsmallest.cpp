
vector<int> minAnd2ndMin(int a[], int n) {
    sort(a,a+n);
    
     if(n<2) return {-1,-1};
    
    int second=-1;
   for(int i=0;i<n;i++)
   {
       if(a[0]<a[i])
       {
           second=a[i];
           break;
           
       }
   }
   if(second==-1)return {-1,-1};
   
   return {a[0],second};
    
}
