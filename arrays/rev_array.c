/* Program to reverse given array */
#include<stdio.h>
#include<string.h>
void rev(int arr[],int n)
{
  int tmp;
  int counter = (n-1)/2;
  for(int i=0;i<=counter;i++)
  {
    tmp = arr[i];
    arr[i] = arr[n-i-1];
    arr[n-i-1] = tmp;
  }
  return;
}
void display(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
  return;
}
int main(void)
{
  int n;
  printf("\n n = ");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
  {
    printf("\n\t Element %d = ",i+1);
    scanf("%d",&arr[i]);
  }
  // Display initial array
  printf("\n Your Array :\n\t");
  display(arr,n);
  // Reverse the array
  rev(arr,n);
  // Show reversed array
  printf("\n Reversed Array :\n\t");
  display(arr,n);
  return 0;
}
