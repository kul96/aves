/*
  The first line of the input contains T denoting the number of testcases.
  First line of test case is the number of elements 'n' and elements 'd'
  to be rotated. Second line of test case will be the array elements.
*/

#include<stdio.h>
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}
int main(void)
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        int n,r,index;
        scanf("%d %d",&n,&r);
        int arr[n],new_arr[n];

        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);

        for(int i=0;i<n;i++)
        {
            index = (i + r)%n;
            new_arr[i] = arr[index];
        }
        display(new_arr,n);
        printf("\n");
    }
return 0;
}
