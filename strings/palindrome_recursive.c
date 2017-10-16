/* Write a recursive function to check whether a string is palindrome or not*/
#include<stdio.h>
#include<string.h>
int IsPalindrome(char *,int,int);
int main(void)
{
  char ch;
  char str[101];
  scanf("%s",str);
  if(IsPalindrome(str,0,strlen(str)-1))
  {
    printf("Yes\n");
  }
  else
  {
    printf("No\n");
  }
  return 0;
}

int IsPalindrome(char str[],int x,int y)
{
  if(x == y)
    return 1;
  if(str[x] != str[y])
    return 0;
  if(x<y)
    return IsPalindrome(str,x+1,y-1);
}
