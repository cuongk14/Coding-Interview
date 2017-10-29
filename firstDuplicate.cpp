//Given an array a that contains only numbers in the range from 1 to a.length, 
//find the first duplicate number for which the second occurrence has the minimal index.

int firstDuplicate(std::vector<int> a) {
    
    a.push_back(INT_MAX);
    int i,n, min_index=INT_MAX, firstDup=-1;
    n=a.size();
    
    for(i=0; i<n;i++){
     if (i==n-1) continue;   
     if (a[abs(a[i])] <0) 
     {
         if (i <min_index)
          {
              min_index=i;
              firstDup=abs(a[i]);
          }
     }
     a[abs(a[i])]=-a[abs(a[i])];
    }
    return firstDup;
        
}
