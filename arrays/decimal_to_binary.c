/* Program to convert a decimal number to binary number */
#include<stdio.h>
void display(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    printf("%d",arr[i]);
  }
  return;
}
void rev(int arr[],int n)
{
  int tmp;
  for(int i=0;i<n;i++)
  {
    tmp = arr[i];
    arr[i] = arr[n-i-1];
    arr[n-i-1] = tmp;
  }
  return;
}
int main(void)
{
  int n,tmp,r,i=0,arr[100];
  printf("\n n = ");
  scanf("%d",&n);
  tmp=n;
  while(tmp != 0)
  {
    arr[i] = tmp%2;
    i++;
    tmp /= 2;
  }
  printf("\n Binary of %d = ",n);
  rev(arr,i);
  display(arr,i);
}
