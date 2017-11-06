//Merge two sub sortted arrays
// used for merge-sort

void merge(int arr[], int start, int mid, int end)
{
    //left half arrays start from index=start to index=mid;
    //right half arrays starts from index=mid+1 to index =end
     int i=0,leftIndex=0,rightIndex=mid+1, subSize=end-start+1;
     int * subArr=new int [subSize];
     while(i<=subSize-1)
     {
         if (leftIndex==mid+1 && rightIndex<=end)
         {
            subArr[i++]=arr[rightIndex++];
         }
         if (rightIndex==end+1 && leftIndex<= mid)
         {
             subArr[i++]=arr[leftIndex++];
         }
         
         if (arr[leftIndex]<=arr[rightIndex])
         {
             subArr[i++]=arr[leftIndex++];
         }
         else
         {
             subArr[i++]=arr[rightIndex++];
         }
           
     }
     for(i=0;i<subSize;i++)
      arr[start+i]=subArr[i];
     
}
