//https://www.hackerrank.com/challenges/ctci-array-left-rotation/problem
//A left rotation operation on an array of size  shifts each of the array's elements  unit to the left. 
//Given an array of  integers and a number, , perform  left rotations on the array. 
int remainder(int a,int b)
{
 //remainder of a divided by b, including  the cases a<0
 return a< 0 ? (a%b+b): a%b;
}

int array_left_rotation(int arr[], int n, int k)
{
    int temp_prev=arr[0],temp_next, j=0,i=0;
    while (i++<=n-1)
    {
       j=remainder(-k+j, n);
       temp_next=arr[j];
       arr[j]=temp_prev;
       temp_prev=temp_next;
    }
}
