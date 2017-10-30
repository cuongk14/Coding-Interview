//https://codefights.com/interview-practice/task/XBWN6DYRqPrKdMZs8/description
//Given a list of non-negative integers nums representing the amount of money hidden in each house,
// determine the maximum amount of money you can rob in one night without triggering an alarm.

int houseRobber(std::vector<int> nums) {
    
    int  size=nums.size();
    if (size==0) return 0;
    if (size==1) return nums[0];
    if (size==2) return nums[0]>=nums[1]? nums[0]:nums[1];
    int * maxArr =new int [size];
    maxArr[0]=nums[0]; maxArr[1]=nums[1];
    int i, j ,temp, res=nums[0]>=nums[1]? nums[0]:nums[1];
    for (i=2; i<size;i++)
    {
        temp=INT_MIN;
        for( j=0; j<i-1;j++)
            if (maxArr[j] >temp)
                temp=maxArr[j];
        maxArr[i]=temp+nums[i];
        if (maxArr[i] >res)
            res=maxArr[i];
            
    }
    return res;
        

}
